using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class FreeRaycast : MonoBehaviour
{
    public static FreeRaycast Instance { get; private set; }

    public Camera Caster;
    public Vector3 Direction; //z for camera

    //Making the object that raycast hit an easy access element.
    public GameObject HitObject { get; private set; }

    private GameObject oldHitObject;

    GestureRecognizer recognizer;

    void Awake()
    {
        Transform Cast = Camera.main.transform;
    }

    // Start is called before the first frame update
    void Start()
    {
          Instance = this;
        recognizer = new GestureRecognizer();
        recognizer.Tapped += (args) =>
        {
            if (HitObject != null)
            {
                HitObject.SendMessage("OnSelect");
            }
        };
        recognizer.StartCapturingGestures();
    }

    // Update is called once per frame
    void Update()
    {
        if(HitObject != oldHitObject)
        {
            if(oldHitObject != null)
            {
                oldHitObject.SendMessage("OnGazeExit", null, SendMessageOptions.DontRequireReceiver);
                oldHitObject = null;
            }
            if(HitObject != null)
            {
                HitObject.SendMessage("OnGazeEnter", null, SendMessageOptions.DontRequireReceiver);
                oldHitObject = HitObject;
            }
            recognizer.CancelGestures();
            recognizer.StartCapturingGestures();
        }   


        RaycastHit hit;
        Ray CastRay = new Ray(Caster.transform.position, Caster.transform.forward);
        //Ray CastRay = new Ray(Camera.main.transform.position, Camera.main.transform.forward);

        if (Physics.Raycast(CastRay, out hit))
        {
            HitObject = hit.collider.gameObject;

        }

        else
        {
            HitObject = null;

        }
    }
}
