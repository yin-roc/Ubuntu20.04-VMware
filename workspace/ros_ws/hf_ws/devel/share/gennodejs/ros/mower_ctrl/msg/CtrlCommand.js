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

class CtrlCommand {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.driving_speed = null;
      this.steering_angle = null;
    }
    else {
      if (initObj.hasOwnProperty('driving_speed')) {
        this.driving_speed = initObj.driving_speed
      }
      else {
        this.driving_speed = 0.0;
      }
      if (initObj.hasOwnProperty('steering_angle')) {
        this.steering_angle = initObj.steering_angle
      }
      else {
        this.steering_angle = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type CtrlCommand
    // Serialize message field [driving_speed]
    bufferOffset = _serializer.float32(obj.driving_speed, buffer, bufferOffset);
    // Serialize message field [steering_angle]
    bufferOffset = _serializer.float32(obj.steering_angle, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type CtrlCommand
    let len;
    let data = new CtrlCommand(null);
    // Deserialize message field [driving_speed]
    data.driving_speed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [steering_angle]
    data.steering_angle = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mower_ctrl/CtrlCommand';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'dc1417894b967b9dcd292bce2f9f4da6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float32 driving_speed
    float32 steering_angle
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new CtrlCommand(null);
    if (msg.driving_speed !== undefined) {
      resolved.driving_speed = msg.driving_speed;
    }
    else {
      resolved.driving_speed = 0.0
    }

    if (msg.steering_angle !== undefined) {
      resolved.steering_angle = msg.steering_angle;
    }
    else {
      resolved.steering_angle = 0.0
    }

    return resolved;
    }
};

module.exports = CtrlCommand;
