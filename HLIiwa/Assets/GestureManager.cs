using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class GestureManager : MonoBehaviour
{
    public static GestureManager Instance { get; private set; }

    private GameObject FocusedObject;
    public string RaycastPath;
    private GameObject Caster;

    GestureRecognizer recognizer;

    // Start is called before the first frame update
    void Awake()
    {
        Caster = GameObject.Find(RaycastPath);
    }

    void Start()
    {
        Instance = this;

        recognizer = new GestureRecognizer();
        recognizer.Tapped += (args) =>
        {
            if (FocusedObject != null)
            {
                FocusedObject.SendMessage("OnSelect");
            }
        };
        recognizer.StartCapturingGestures();
    }

    // Update is called once per frame
    void Update()
    {
        FreeRaycast Part = Caster.GetComponent<FreeRaycast>();
        FocusedObject = Part.HitObject;
    }
}
