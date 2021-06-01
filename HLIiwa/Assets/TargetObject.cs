using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetObject : MonoBehaviour
{
    public GameObject Parent;
    public GameObject EndEffector;
    private bool Enabled = false;

    //private Vector3 CurPosition;
    private Vector3 DataPosition;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Enabled)
        {

            if (transform.position != DataPosition)
            {
                Parent.BroadcastMessage("OnJacobian", transform.position);
                DataPosition = transform.position;
            }
        }
        else
        {
            OnPlace();
        }
        
    }

    void OnPlace()
    {
        transform.position = EndEffector.transform.position;
        DataPosition = transform.position;
    }

    void OnButton(Vector3 movement)
    {
        transform.position += movement;
    }

    void OnJacobian()
    {
        Enabled = true;
    }

    void OnLeave()
    {
        Enabled = false;
    }

    void OnMouseDown()
    {
        if (!Enabled)
        {
            Parent.BroadcastMessage("OnEnableJacobian");
            GetComponent<Renderer>().material.color = Color.cyan;
            Enabled = true;
        }
        else
        {
            Parent.BroadcastMessage("OnEnableFK");
            GetComponent<Renderer>().material.color = Color.red;
            Enabled = false;
        }
    }
}
