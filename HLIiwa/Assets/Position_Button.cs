using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Position_Button : MonoBehaviour
{
    #region Settings
    // Getting the parent object
    public GameObject ParentObject;
    // Clear part of the button
    public GameObject ClearButton;

    public bool Increment = true;

    // Setting the Button Value
    public Vector3 ButtonValue;
    #endregion

    #region User Interface Set-up

    #region Color Set-up

    private Color StartColorClear;

    private Color _Red = new Color(1.0f, 0.0f, 0.0f, 1.0f);
    //Alpha Red
    private Color _RedA = new Color(1.0f, 0.0f, 0.0f, 0.5f);
    //Cyan
    private Color _Cyan = new Color(0, 1, 1, 1);
    //Alpha Cyan
    private Color _CyanA = new Color(0, 1, 1, 0.5f);
    #endregion

    #region Renderer Set-up
    //Renderer for Clear Part
    private Renderer RendClear;
    //Renderer for Solid Part
    #endregion

    #endregion

    void Awake()
    {
        RendClear = ClearButton.GetComponent<Renderer>();

        StartColorClear = RendClear.material.color;
        ClearButton.SetActive(false);
    }

    //void OnValueChange(float value)
    //{
    //    if (Increment)
    //    {
    //        ButtonValue = value;
    //    }

    //    else
    //    {
    //        ButtonValue = -1 * value;
    //    }
    //}

    void OnSelect()
    {
        RendClear.material.color = _RedA;
        ParentObject.SendMessage("OnButton", ButtonValue, SendMessageOptions.RequireReceiver);
        RendClear.material.color = _CyanA;
    }

    void OnGazeEnter()
    {
        RendClear.material.color = _CyanA;
        ClearButton.SetActive(true);
    }

    void OnGazeExit()
    {
        ClearButton.SetActive(false);
        RendClear.material.color = StartColorClear;
    }

    #region Alternative Mouse Input
    void OnMouseDown()
    {
        OnSelect();
    }

    void OnMouseEnter()
    {
        OnGazeEnter();
    }

    void OnMouseExit()
    {
        OnGazeExit();
    }
    #endregion
}
