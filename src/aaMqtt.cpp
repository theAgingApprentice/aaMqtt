/******************************************************************************
 * @file aaMqtt.cpp
 *
 * @mainpage the Aging Apprentice flash memory class 
 * 
 * @section intro_sec Introduction
 *
 * This is an Arduino class that handles publish and subscription transactions
 * with an MQTT broker. This is part of a series of classes made to support a 
 * standard set of APIs for robot platforms. 
 *
 * @section dependencies Dependencies
 * 
 * This class depends on on <a href="https://github.com/espressif/arduino-esp32">
 * Arduino.h</a> being present on your system. This is the Arduino core library
 * that comes bundled with PlatformIO.
 *
 * @section author Author(s)
 *
 * Written by Old Squire for the Aging Apprentice.
 *
 * @section license license
 *
 * Copyright 2021 the Aging Apprentice 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions: The above copyright
 * notice and this permission notice shall be included in all copies or 
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.  
 *****************************************************************************/
#include <aaMqtt.h> // Header file for linking.

/**
 * @class Write variables to flash memory.
 ============================================================================*/
aaMqtt::aaMqtt() 
{
   Serial.println("<aaMqtt::aaMqtt> Default constructor running.");
} // aaMqtt::aaMqtt()

/**
 * @brief This is the destructor for this class.
 =============================================================================*/
aaMqtt::~aaMqtt() 
{
   Serial.println("<aaMqtt::aaMqtt> Destructor running.");
} // aaMqtt::aaMqtt()

/**
 * @brief Connect to MQTT broker.
 * @param IPAddress IP address of the MQTT broker. 
 * @param char* Unique name used to prefix all topic trees.
 =============================================================================*/
static void aaMqtt::connect(IPAddress address, const char* uniqueName)
{

} // aaMqtt::connect()

/**
 * @brief Event handler for connecting to the broker.
 * @param bool  Check to see if there are messages queued already. 
 =============================================================================*/
static void aaMqtt::onMqttConnect(bool sessionPresent)
{

} // aaMqtt::onMqttConnect()

/**
 * @brief Event handler for disconnecting from the broker.
 * @param AsyncMqttClientDisconnectReason Reason code. 
 =============================================================================*/
static void aaMqtt::onMqttDisconnect(AsyncMqttClientDisconnectReason reason)
{

} // void aaMqtt::onMqttDisconnect()

/**
 * @brief Event handler for subscribing to a topic on the broker.
 * @param uint16_t PackID that matches the subscription request. 
 * @param uint8_t Qulaity Of Service level for this subscription. 
 =============================================================================*/
static void aaMqtt::onMqttSubscribe(uint16_t packetId, uint8_t qos)
{

} // aaMqtt::onMqttSubscribe()

/**
 * @brief Event handler for subscribing to a topic on the broker.
 * @param uint16_t PackID that matches the unsubscribe request. 
 =============================================================================*/
static void aaMqtt::onMqttUnsubscribe(uint16_t packetId)
{

} // aaMqtt::onMqttUnsubscribe()

/**
 * @brief Publishes a message to the MQTT server.
 * @param char* Topic to pubished to.
 * @param char* Message  to publish. 
 =============================================================================*/
static bool aaMqtt::publishMQTT(const char* topic, const char* msg)
{

} // aaMqtt::publishMQTT()

/**
 * @brief Publishes an event.
 * @param int Event ID.
 * @param int Event severity.
 * @param String Event message.
 =============================================================================*/
static void aaMqtt::publishEvent(int evtId, int evtSev, String evtMsg)
{

} // aaMqtt::publishEvent()

/**
 * @brief Event handler for recieving a message from a subscribed topic.
 * @param char* Topic message pertains to.  
 * @param char* Message payload. 
 * @param AsyncMqttClientMessageProperties Message properties. 
 * @param size_t Length of message payload. 
 * @param size_t Message index. 
 * @param size_t Total length of message.
 =============================================================================*/
static void aaMqtt::onMqttMessage(char *topic, char *payload, AsyncMqttClientMessageProperties properties, size_t len, size_t index, size_t total)
{

} // aaMqtt::onMqttMessage()

/**
 * @brief Event handler for the ACK from a published message.
 * @param uint16_t Packet Id of message that was published.
 =============================================================================*/
static void aaMqtt::onMqttPublish(uint16_t packetId)
{

} // aaMqtt::onMqttPublish()