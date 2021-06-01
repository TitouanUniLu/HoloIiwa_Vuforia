#region Import
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

using UnityEngine;

using uPLibrary.Networking.M2Mqtt;
using uPLibrary.Networking.M2Mqtt.Messages;
#endregion

public class Manager : MonoBehaviour
{
    private MqttClient client;

    public GameObject MenuPanel;
    public GameObject RoboticArm;
    
    private string[] ValName = new string[7];

    public string _clientAdress;
    public string MainTopic = "Kuka/#";

    void Start()
    {
        client = new MqttClient(_clientAdress);
        client.MqttMsgPublishReceived += client_MqttMsgPublishRecieved;
        string clientID = Guid.NewGuid().ToString();
        client.Connect(clientID);
        client.Subscribe(new string[] { MainTopic}, new byte[] { 2 });
    }

    void OnPublish(object[] Value)
    {
        string Message = Value[0].ToString();
        string Topic = Value[1].ToString();
        client.Publish(Topic, Encoding.UTF8.GetBytes(Message), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, true);
        //Debug.Log("Sent message: " + Message + " to the topic " + Topic);
    }

    void OnImport()
    {
        RoboticArm.BroadcastMessage("OnImport", ValName, SendMessageOptions.DontRequireReceiver);
    }

    void client_MqttMsgPublishRecieved(object sender, MqttMsgPublishEventArgs e)
    {
        string msg = Encoding.UTF8.GetString( e.Message );
        string[] LocalTopic = e.Topic.Split('/');
        Debug.Log("Got message: " + msg + " from the topic " + LocalTopic[LocalTopic.Length -1]);
        string LastName = LocalTopic[LocalTopic.Length - 1];
        if (LocalTopic[1] == "Robot Base")
        {
            string LastNumber = LastName.Substring(LastName.Length - 1);
            int num = int.Parse(LastNumber);
            ValName[num - 1] = LastName + "/" + msg;
        }
    }

    void OnValueControl(float value)
    {
        MenuPanel.BroadcastMessage("OnValueChange", value, SendMessageOptions.DontRequireReceiver);
    }
}
