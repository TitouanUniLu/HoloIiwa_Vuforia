using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class objectSeek : MonoBehaviour
{
    public GameObject Obj;
    public GameObject Seeker;

    // Update is called once per frame
    void Update()
    {
        float Difx = (Seeker.transform.position.x - Obj.transform.position.x);
        float Dify = (Seeker.transform.position.y - Obj.transform.position.y);
        float Difz = (Seeker.transform.position.z - Obj.transform.position.z);
        //float objx = -Obj.transform.position.x;
        //Vector3 objlocation = new Vector3 (-Obj.transform.position.x, -Obj.transform.position.y, -Obj.transform.position.z);
        //Seeker.transform.LookAt(objlocation, Vector3.up);
        //Vector3 RelPos = Obj.transform.InverseTransformVector(0,0,0) - Seeker.transform.position;
        //Seeker.transform.rotation = Quaternion.LookRotation(RelPos);
        //Vector3 position = new Vector3(-Obj.transform.position.x, -Obj.transform.position.y, -Obj.transform.position.z);
        //Vector3 position = new Vector3(-Obj.transform.position.x, Obj.transform.position.y, -Obj.transform.position.z);
        Vector3 position = new Vector3(Difx, Dify, Difz);
        Seeker.transform.LookAt(position, Vector3.up);
    }
}
