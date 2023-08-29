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

class ReleaseProtectiveStopRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.release_mode = null;
    }
    else {
      if (initObj.hasOwnProperty('release_mode')) {
        this.release_mode = initObj.release_mode
      }
      else {
        this.release_mode = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReleaseProtectiveStopRequest
    // Serialize message field [release_mode]
    bufferOffset = _serializer.int8(obj.release_mode, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReleaseProtectiveStopRequest
    let len;
    let data = new ReleaseProtectiveStopRequest(null);
    // Deserialize message field [release_mode]
    data.release_mode = _deserializer.int8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/ReleaseProtectiveStopRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b8a44b3d82288e0e3be18ede2666de6e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    #____________________________________________________________________________________________
    # release_protective_stop
    #____________________________________________________________________________________________
    
    int8 release_mode     # 0=RELEASE_MODE_STOP, 1=RELEASE_MODE_RESUME, 2=RELEASE_MODE_RELEASE, 3=RELEASE_MODE_RESET
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReleaseProtectiveStopRequest(null);
    if (msg.release_mode !== undefined) {
      resolved.release_mode = msg.release_mode;
    }
    else {
      resolved.release_mode = 0
    }

    return resolved;
    }
};

class ReleaseProtectiveStopResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReleaseProtectiveStopResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReleaseProtectiveStopResponse
    let len;
    let data = new ReleaseProtectiveStopResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dsr_msgs/ReleaseProtectiveStopResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '358e233cde0c8a8bcfea4ce193f8fc15';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReleaseProtectiveStopResponse(null);
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
  Request: ReleaseProtectiveStopRequest,
  Response: ReleaseProtectiveStopResponse,
  md5sum() { return '3cf8efd6d59d99783a077dda000b1bbb'; },
  datatype() { return 'dsr_msgs/ReleaseProtectiveStop'; }
};
