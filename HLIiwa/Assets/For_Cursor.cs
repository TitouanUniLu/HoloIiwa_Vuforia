using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class For_Cursor : MonoBehaviour
{
    #region Version
    //v1.0
    #endregion

    
    private MeshRenderer meshRenderer;
    public Camera mainCamera;

    // Start is called before the first frame update
    void Start()
    {
        meshRenderer = this.gameObject.GetComponentInChildren<MeshRenderer>();
    }

    void OnHitInfo(bool value)
    {

    }

    // Update is called once per frame
    void Update()
    {
        var headPosition = mainCamera.transform.position;
        var gazeDirection = mainCamera.transform.forward;

        RaycastHit hitInfo;
        if(Physics.Raycast(headPosition, gazeDirection, out hitInfo))
        {
            meshRenderer.enabled = true;
            this.transform.position = hitInfo.point;
            this.transform.rotation = Quaternion.FromToRotation(Vector3.up, hitInfo.normal);
        }
        else
        {
            meshRenderer.enabled = false;
        }
    }
}
