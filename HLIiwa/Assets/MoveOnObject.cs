using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveOnObject : MonoBehaviour
{
    #region Object Pull
    public GameObject Object;
    public GameObject FollowingObject;
    #endregion
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        FollowingObject.transform.position = Object.transform.position;
    }
}
