using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuButtons : MonoBehaviour
{
    #region Settings
    public GameObject ParentObject;
    public GameObject ClearButton;



    public string messageName;
    #endregion

    #region User Interface Set-up

    #region Color Set-up
    //Starting Color for Clear
    private Color StartColorClear;
    //Starting Color for Solid
    //Starting Color for Text
    //Red
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

    // Start is called before the first frame update
    void Start()
    {

    }

    void OnSelect()
    {
        ParentObject.BroadcastMessage(
            messageName, null, SendMessageOptions.DontRequireReceiver);
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


    void OnMouseEnter()
    {
        OnGazeEnter();

    }

    void OnMouseExit()
    {
        OnGazeExit();
    }

    void OnMouseDown()
    {
        OnSelect();
    }

    // Update is called once per frame
    void Update()
    {

    }
}
