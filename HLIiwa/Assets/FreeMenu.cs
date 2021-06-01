using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FreeMenu : MonoBehaviour
{
    public GameObject Control;
    public GameObject Value;
    public GameObject Menu;
    public GameObject Angle;
    public GameObject Tool;
    public GameObject AngleControl;
    public GameObject Error;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    void OnValue()
    {
        Control.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Control.SetActive(false);
        
        Menu.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Menu.SetActive(false);
        
        Tool.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Tool.SetActive(false);
        
        Angle.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Angle.SetActive(false);

        Error.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Error.SetActive(false);

        //Value.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Value.SetActive(true);
    }

    void OnControl()
    {
        Value.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Value.SetActive(false);

        Tool.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Tool.SetActive(false);

        Angle.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Angle.SetActive(false);

        Menu.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Menu.SetActive(false);

        Error.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Error.SetActive(false);

        //Control.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Control.SetActive(true);
    }

    void OnAngle()
    {
        Control.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Control.SetActive(false);

        Value.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Value.SetActive(false);

        Tool.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Tool.SetActive(false);

        Menu.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Menu.SetActive(false);

        Error.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Error.SetActive(false);

        //Angle.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Angle.SetActive(true);

    }

    void OnTool()
    {
        Control.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Control.SetActive(false);

        Value.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Value.SetActive(false);

        Angle.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Angle.SetActive(false);

        Menu.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Menu.SetActive(false);

        Error.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Error.SetActive(false);

        //Tool.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Tool.SetActive(true);
    }

    void OnMenu()
    {
        Control.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Control.SetActive(false);

        Value.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Value.SetActive(false);

        Tool.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Tool.SetActive(false);

        Angle.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Angle.SetActive(false);

        Error.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Error.SetActive(false);

        //Menu.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        Menu.SetActive(true);
    }

    void OnAngleControl()
    {
        if (AngleControl.activeSelf)
        {
            AngleControl.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
            AngleControl.SetActive(false);
        }
        else
        {
            AngleControl.SetActive(true);
        }
    }

    void OnError()
    {
        AngleControl.BroadcastMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
        AngleControl.SetActive(false);
        
        Error.SetActive(true);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
