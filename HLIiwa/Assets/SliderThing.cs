using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SliderThing : MonoBehaviour
{
    public GameObject sliderObject;
    public GameObject ParentObject;

    public bool withText = false;

    public GameObject textObject = null;

    public float currentAngleValue;
    private float dataAngleValue;

    //private float dataPosition;
    public float currentPosition;

    public float RatioOfConv = 700;

    // Start is called before the first frame update
    void Start()
    {

        

    }

    // Update is called once per frame
    void Update()
    {
        if (withText)
        {
            currentAngleValue = ParentObject.GetComponent<Universal_Mover>().AngleValue;
            if (currentAngleValue > 0)
            {
                textObject.GetComponent<TextMesh>().text = "+" + currentAngleValue.ToString();
            }
            else
            {

                textObject.GetComponent<TextMesh>().text = currentAngleValue.ToString();
            }
        }
        

        //location cal
        currentPosition = currentAngleValue / RatioOfConv;
        //Location Update
        //sliderObject.transform.position = new Vector3(currentPosition - dataPosition, sliderObject.transform.position.y, sliderObject.transform.position.z);

        //name call
        float sliderY = sliderObject.transform.localPosition.y;
        float sliderZ = sliderObject.transform.localPosition.z;
        //the problem with the upper code is that it's based on the world oriented positioning of the object, so a local position has to be implemented
        sliderObject.transform.localPosition = new Vector3(currentPosition, sliderY, sliderZ);
    }
}
