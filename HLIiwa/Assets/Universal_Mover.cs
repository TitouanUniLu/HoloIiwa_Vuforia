#region Import
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

using UnityEngine;
#endregion

public class Universal_Mover : MonoBehaviour
{
    #region Version
    //Last Modified Date: 4.3.19'
    //Person to Modify: esignael
    //Updates: Making the code more readable
    #endregion

    #region Settings
    //This is where all the public values that have to be set reside
    
    //Rotation Axis selection
    public GameObject Axis;
        //Axis is the point where the transformation is made

    //Rotating object selection
    public GameObject Arm;
        //Arm is the object that the transformation is applied to

    public GameObject EndEffector;
    public Vector3 TargetPosition;
    //Probably need a new value for rotation nature
    public bool Rotation;
        //This is the nature of the rotation, if its .up or .forward 
        //See RotationCheck()

    //Min-Max Values of the freedom of movement of the joint
    public float Min;
    public float Max;
    #endregion

    #region Set-up
    //this is the region where the needed private values are made

    private object[] Storage = new object[2];
        //This array is for sending the topic and angleValue to publisher
        //See SetTopicAndValue()

    private string Topic;
        //Topic for the joint, created from hierarchy, for MQTT

    //The name holder for the rotation
    private Vector3 Nature;
    //Dependant on Rotation (See above "Settings")

    public bool InverseKinematics = false;
    
    //To create the path of the joint, also for MQTT
    public static string GetGameObjectPath(GameObject obj)
    {
        //string path = "/" + obj.name;
        string path = obj.name;
        while (obj.transform.parent != null)
        {
            obj = obj.transform.parent.gameObject;
            //path = "/" + obj.name + path;
            path = obj.name + "/" + path;
        }
        return path;
    }
#endregion

    #region Angle Set-up

    public float AngleValue = 0.0f;

    //Compare Value
    private float DataValue;
    //Comparing tool, from frame to frame, calculating the 
    //movement difference.

    //Commited Value
    private float CommitedValue;
        //CommitedValue is what the script reverts to if the user
        //cancels the transformation.
    #endregion

    #region Manager Pull
    public GameObject Manager;
    #endregion

    //Awake is called before Start(), for initializing the undetermined objects
    void Awake()
    {
        Topic = GetGameObjectPath(Arm);
            //getting the game object path for MQTT
    }

    void OnButton(float value)
    {
        if (AngleValue + value >= Max)
        {
            AngleValue = Max;
        }
        else if (AngleValue + value <= Min)
        {
            AngleValue = Min;
        }
        else
        {
            AngleValue += value;
        }
    }

    void OnCommit()
    {
        CommitedValue = AngleValue;
    }

    void OnExport()
    {
        SetTopicAndValue();
        Manager.SendMessage("OnPublish", Storage, SendMessageOptions.RequireReceiver);
    }

    void OnImport(string[] ImportedValues)
    {
        for(int i = 0; i < ImportedValues.Length; i++)
        {
            string inst = ImportedValues[i];
            string[] vals = inst.Split('/');
            if (vals[0] == name)
            {
                AngleValue = float.Parse(vals[1]);
                OnCommit();
            }
        }
    }


    void OnCancel()
    {
        AngleValue = CommitedValue;
    }

    void RotationCheck()
    {
        if (Rotation == true)
        {
            Nature = Axis.transform.forward;
        }
        else
        {
            Nature = Axis.transform.up;
        }
    }

    void SetTopicAndValue()
    {
        Storage[0] = CommitedValue;
        Storage[1] = Topic;
    }

    void OnJacobian(Vector3 Target)
    {
        TargetPosition = Target;
    }

    void OnEnableJacobian()
    {
        InverseKinematics = true;
    }

    void OnEnableFK()
    {
        InverseKinematics = false;
    }

    // Update is called once per frame
    void Update()
    {
        RotationCheck();
        Vector3 EndPosition = EndEffector.transform.position;
        if (InverseKinematics)
        {
            if(Vector3.Distance(EndPosition, TargetPosition) > 0.001)
            {
                Vector3 DiffPosition = TargetPosition - EndPosition;
                Vector3 current = Axis.transform.position;
                Vector3 orientation = Vector3.Cross(Nature, EndPosition - current);
                AngleValue += (orientation.x * DiffPosition.x) + (orientation.y * DiffPosition.y) + (orientation.z * DiffPosition.z);
                Arm.transform.RotateAround
                    (Axis.transform.position, Nature, AngleValue - DataValue);

                DataValue = AngleValue;
            }
            else if (Vector3.Distance(EndPosition, TargetPosition) < 0.001)
            {
                OnCommit();
            }
        }

        else
        {
            Arm.transform.RotateAround
                (Axis.transform.position, Nature, DataValue - AngleValue);

            DataValue = AngleValue;
        }
    }
}