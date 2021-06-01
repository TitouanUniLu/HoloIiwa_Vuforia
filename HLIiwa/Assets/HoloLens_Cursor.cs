using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoloLens_Cursor : MonoBehaviour
{
    private MeshRenderer meshRenderer;

    public Camera MainCam;

    public GameObject Cursor;

    // Use this for initialization
    void Start()
    {
        // Grab the mesh renderer that's on the same object as this script.
        meshRenderer = Cursor.GetComponentInChildren<MeshRenderer>();
    }   

    // Update is called once per frame
    void Update()
    {
        // Do a raycast into the world based on the user's
        // head position and orientation.
        var headPosition = MainCam.transform.position;
        var gazeDirection = MainCam.transform.forward;

        RaycastHit hitInfo;

        if (Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            // If the raycast hit a hologram...
            // Display the cursor mesh.
            meshRenderer.enabled = true;

            //Debug.Log("hit!");

            // Move thecursor to the point where the raycast hit.
            Cursor.transform.position = hitInfo.point;

            // Rotate the cursor to hug the surface of the hologram.
            Cursor.transform.rotation = Quaternion.FromToRotation(Vector3.up, hitInfo.normal);
        }
        else
        {
            // If the raycast did not hit a hologram, hide the cursor mesh.
            meshRenderer.enabled = false;
        }
    }
}
