using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForCollision : MonoBehaviour
{
    public GameObject ArmAfter;
    public GameObject ArmBefore;
    public GameObject ParentObject;

    private Color StartColor;
    private Color _Red = new Color(1.0f, 0.0f, 0.0f, 1.0f);
    private Renderer materialRend;

    void Update()
    {
        ParentObject = GameObject.Find("ControlPanel");
    }

    // Start is called before the first frame update
    void Start()
    {
        materialRend = GetComponent<Renderer>();
        StartColor = materialRend.material.color;
    }

    void OnTriggerEnter(Collider other)
    {
        

        //if(other.gameObject != ArmAfter && other.gameObject != ArmBefore)
        //{
        //    materialRend.material.color = _Red;
        //    ParentObject.BroadcastMessage("OnCollision");
        //}
        if(other.name == ArmAfter.name) { }
        else if(other.name == ArmBefore.name) { }
        else
        {
            Debug.Log("Collision by " + name + " with " + other.name);
            materialRend.material.color = _Red;
            ParentObject.BroadcastMessage("OnCollision");
        }

    }

    void OnTriggerExit(Collider other)
    {
        

        if (other.name == ArmAfter.name) { }
        else if (other.name == ArmBefore.name) { }
        else
        {
            Debug.Log("Resolve by " + name + " with " + other.name);
            materialRend.material.color = StartColor;
            ParentObject.BroadcastMessage("OnResolve");
        }

    }
}
