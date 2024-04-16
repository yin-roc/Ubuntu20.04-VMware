// Auto-generated. Do not edit!

// (in-package mower_ctrl.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SensorValue {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.col_data1 = null;
      this.col_data2 = null;
      this.col_data3 = null;
      this.col_data4 = null;
      this.ul_data1 = null;
      this.ul_data2 = null;
      this.ul_data3 = null;
      this.ul_data4 = null;
      this.distance = null;
      this.carpipe = null;
      this.rollpipe = null;
      this.nowcar_speed = null;
    }
    else {
      if (initObj.hasOwnProperty('col_data1')) {
        this.col_data1 = initObj.col_data1
      }
      else {
        this.col_data1 = 0;
      }
      if (initObj.hasOwnProperty('col_data2')) {
        this.col_data2 = initObj.col_data2
      }
      else {
        this.col_data2 = 0;
      }
      if (initObj.hasOwnProperty('col_data3')) {
        this.col_data3 = initObj.col_data3
      }
      else {
        this.col_data3 = 0;
      }
      if (initObj.hasOwnProperty('col_data4')) {
        this.col_data4 = initObj.col_data4
      }
      else {
        this.col_data4 = 0;
      }
      if (initObj.hasOwnProperty('ul_data1')) {
        this.ul_data1 = initObj.ul_data1
      }
      else {
        this.ul_data1 = 0;
      }
      if (initObj.hasOwnProperty('ul_data2')) {
        this.ul_data2 = initObj.ul_data2
      }
      else {
        this.ul_data2 = 0;
      }
      if (initObj.hasOwnProperty('ul_data3')) {
        this.ul_data3 = initObj.ul_data3
      }
      else {
        this.ul_data3 = 0;
      }
      if (initObj.hasOwnProperty('ul_data4')) {
        this.ul_data4 = initObj.ul_data4
      }
      else {
        this.ul_data4 = 0;
      }
      if (initObj.hasOwnProperty('distance')) {
        this.distance = initObj.distance
      }
      else {
        this.distance = 0;
      }
      if (initObj.hasOwnProperty('carpipe')) {
        this.carpipe = initObj.carpipe
      }
      else {
        this.carpipe = 0;
      }
      if (initObj.hasOwnProperty('rollpipe')) {
        this.rollpipe = initObj.rollpipe
      }
      else {
        this.rollpipe = 0;
      }
      if (initObj.hasOwnProperty('nowcar_speed')) {
        this.nowcar_speed = initObj.nowcar_speed
      }
      else {
        this.nowcar_speed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SensorValue
    // Serialize message field [col_data1]
    bufferOffset = _serializer.uint8(obj.col_data1, buffer, bufferOffset);
    // Serialize message field [col_data2]
    bufferOffset = _serializer.uint8(obj.col_data2, buffer, bufferOffset);
    // Serialize message field [col_data3]
    bufferOffset = _serializer.uint8(obj.col_data3, buffer, bufferOffset);
    // Serialize message field [col_data4]
    bufferOffset = _serializer.uint8(obj.col_data4, buffer, bufferOffset);
    // Serialize message field [ul_data1]
    bufferOffset = _serializer.uint16(obj.ul_data1, buffer, bufferOffset);
    // Serialize message field [ul_data2]
    bufferOffset = _serializer.uint16(obj.ul_data2, buffer, bufferOffset);
    // Serialize message field [ul_data3]
    bufferOffset = _serializer.uint16(obj.ul_data3, buffer, bufferOffset);
    // Serialize message field [ul_data4]
    bufferOffset = _serializer.uint16(obj.ul_data4, buffer, bufferOffset);
    // Serialize message field [distance]
    bufferOffset = _serializer.uint32(obj.distance, buffer, bufferOffset);
    // Serialize message field [carpipe]
    bufferOffset = _serializer.uint8(obj.carpipe, buffer, bufferOffset);
    // Serialize message field [rollpipe]
    bufferOffset = _serializer.uint8(obj.rollpipe, buffer, bufferOffset);
    // Serialize message field [nowcar_speed]
    bufferOffset = _serializer.float32(obj.nowcar_speed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SensorValue
    let len;
    let data = new SensorValue(null);
    // Deserialize message field [col_data1]
    data.col_data1 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [col_data2]
    data.col_data2 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [col_data3]
    data.col_data3 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [col_data4]
    data.col_data4 = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [ul_data1]
    data.ul_data1 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [ul_data2]
    data.ul_data2 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [ul_data3]
    data.ul_data3 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [ul_data4]
    data.ul_data4 = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [distance]
    data.distance = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [carpipe]
    data.carpipe = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [rollpipe]
    data.rollpipe = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [nowcar_speed]
    data.nowcar_speed = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 22;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mower_ctrl/SensorValue';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6b1c1b5327ee628950d965f31630e649';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 col_data1
    uint8 col_data2
    uint8 col_data3
    uint8 col_data4
    uint16 ul_data1
    uint16 ul_data2
    uint16 ul_data3
    uint16 ul_data4
    uint32 distance
    uint8 carpipe
    uint8 rollpipe
    float32 nowcar_speed
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SensorValue(null);
    if (msg.col_data1 !== undefined) {
      resolved.col_data1 = msg.col_data1;
    }
    else {
      resolved.col_data1 = 0
    }

    if (msg.col_data2 !== undefined) {
      resolved.col_data2 = msg.col_data2;
    }
    else {
      resolved.col_data2 = 0
    }

    if (msg.col_data3 !== undefined) {
      resolved.col_data3 = msg.col_data3;
    }
    else {
      resolved.col_data3 = 0
    }

    if (msg.col_data4 !== undefined) {
      resolved.col_data4 = msg.col_data4;
    }
    else {
      resolved.col_data4 = 0
    }

    if (msg.ul_data1 !== undefined) {
      resolved.ul_data1 = msg.ul_data1;
    }
    else {
      resolved.ul_data1 = 0
    }

    if (msg.ul_data2 !== undefined) {
      resolved.ul_data2 = msg.ul_data2;
    }
    else {
      resolved.ul_data2 = 0
    }

    if (msg.ul_data3 !== undefined) {
      resolved.ul_data3 = msg.ul_data3;
    }
    else {
      resolved.ul_data3 = 0
    }

    if (msg.ul_data4 !== undefined) {
      resolved.ul_data4 = msg.ul_data4;
    }
    else {
      resolved.ul_data4 = 0
    }

    if (msg.distance !== undefined) {
      resolved.distance = msg.distance;
    }
    else {
      resolved.distance = 0
    }

    if (msg.carpipe !== undefined) {
      resolved.carpipe = msg.carpipe;
    }
    else {
      resolved.carpipe = 0
    }

    if (msg.rollpipe !== undefined) {
      resolved.rollpipe = msg.rollpipe;
    }
    else {
      resolved.rollpipe = 0
    }

    if (msg.nowcar_speed !== undefined) {
      resolved.nowcar_speed = msg.nowcar_speed;
    }
    else {
      resolved.nowcar_speed = 0.0
    }

    return resolved;
    }
};

module.exports = SensorValue;
