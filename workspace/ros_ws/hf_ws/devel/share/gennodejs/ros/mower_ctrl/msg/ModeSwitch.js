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

class ModeSwitch {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.target_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('target_mode')) {
        this.target_mode = initObj.target_mode
      }
      else {
        this.target_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ModeSwitch
    // Serialize message field [target_mode]
    bufferOffset = _serializer.uint8(obj.target_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ModeSwitch
    let len;
    let data = new ModeSwitch(null);
    // Deserialize message field [target_mode]
    data.target_mode = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mower_ctrl/ModeSwitch';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '21bb3ed8ffad6c72f7481393b4163913';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 target_mode
    uint8 MOTION_MODE_STEERING = 0
    uint8 MOTION_MODE_TRANSLATION = 1
    uint8 MOTION_MODE_ROTATION = 2
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ModeSwitch(null);
    if (msg.target_mode !== undefined) {
      resolved.target_mode = msg.target_mode;
    }
    else {
      resolved.target_mode = 0
    }

    return resolved;
    }
};

// Constants for message
ModeSwitch.Constants = {
  MOTION_MODE_STEERING: 0,
  MOTION_MODE_TRANSLATION: 1,
  MOTION_MODE_ROTATION: 2,
}

module.exports = ModeSwitch;
