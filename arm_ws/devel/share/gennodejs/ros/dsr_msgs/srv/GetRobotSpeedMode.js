// Auto-generated. Do not edit!

// (in-package dsr_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class GetRobotSpeedModeRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetRobotSpeedModeRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetRobotSpeedModeRequest
    let len;
    let data = new GetRobotSpeedModeRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/GetRobotSpeedModeRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #____________________________________________________________________________________________
    # get_robot_speed_mode
    #____________________________________________________________________________________________
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetRobotSpeedModeRequest(null);
    return resolved;
    }
};

class GetRobotSpeedModeResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.speed_mode = null;
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('speed_mode')) {
        this.speed_mode = initObj.speed_mode
      }
      else {
        this.speed_mode = 0;
      }
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GetRobotSpeedModeResponse
    // Serialize message field [speed_mode]
    bufferOffset = _serializer.int8(obj.speed_mode, buffer, bufferOffset);
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GetRobotSpeedModeResponse
    let len;
    let data = new GetRobotSpeedModeResponse(null);
    // Deserialize message field [speed_mode]
    data.speed_mode = _deserializer.int8(buffer, bufferOffset);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 2;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/GetRobotSpeedModeResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b5d54772deeae3778247a5930ed4c1f0';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int8 speed_mode # 0 : SPEED_NORMAL_MODE
                    # 1 : SPEED_REDUCED_MODE
    bool        success   
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GetRobotSpeedModeResponse(null);
    if (msg.speed_mode !== undefined) {
      resolved.speed_mode = msg.speed_mode;
    }
    else {
      resolved.speed_mode = 0
    }

    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    return resolved;
    }
};

module.exports = {
  Request: GetRobotSpeedModeRequest,
  Response: GetRobotSpeedModeResponse,
  md5sum() { return 'b5d54772deeae3778247a5930ed4c1f0'; },
  datatype() { return 'dsr_msgs/GetRobotSpeedMode'; }
};
