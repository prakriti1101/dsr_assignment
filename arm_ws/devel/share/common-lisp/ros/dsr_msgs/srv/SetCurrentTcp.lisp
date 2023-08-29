; Auto-generated. Do not edit!


(cl:in-package dsr_msgs-srv)


;//! \htmlinclude SetCurrentTcp-request.msg.html

(cl:defclass <SetCurrentTcp-request> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform ""))
)

(cl:defclass SetCurrentTcp-request (<SetCurrentTcp-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetCurrentTcp-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetCurrentTcp-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<SetCurrentTcp-request> is deprecated: use dsr_msgs-srv:SetCurrentTcp-request instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <SetCurrentTcp-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dsr_msgs-srv:name-val is deprecated.  Use dsr_msgs-srv:name instead.")
  (name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetCurrentTcp-request>) ostream)
  "Serializes a message object of type '<SetCurrentTcp-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetCurrentTcp-request>) istream)
  "Deserializes a message object of type '<SetCurrentTcp-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetCurrentTcp-request>)))
  "Returns string type for a service object of type '<SetCurrentTcp-request>"
  "dsr_msgs/SetCurrentTcpRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentTcp-request)))
  "Returns string type for a service object of type 'SetCurrentTcp-request"
  "dsr_msgs/SetCurrentTcpRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetCurrentTcp-request>)))
  "Returns md5sum for a message object of type '<SetCurrentTcp-request>"
  "d08a3b641c2f8680fbdfb1ea2e17a3e1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetCurrentTcp-request)))
  "Returns md5sum for a message object of type 'SetCurrentTcp-request"
  "d08a3b641c2f8680fbdfb1ea2e17a3e1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetCurrentTcp-request>)))
  "Returns full string definition for message of type '<SetCurrentTcp-request>"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# set_current_tcp  ~%# It is a service that sets the information about the currently installed TCP~%#____________________________________________________________________________________________~%~%string         name # tcp name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetCurrentTcp-request)))
  "Returns full string definition for message of type 'SetCurrentTcp-request"
  (cl:format cl:nil "#____________________________________________________________________________________________~%# set_current_tcp  ~%# It is a service that sets the information about the currently installed TCP~%#____________________________________________________________________________________________~%~%string         name # tcp name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetCurrentTcp-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetCurrentTcp-request>))
  "Converts a ROS message object to a list"
  (cl:list 'SetCurrentTcp-request
    (cl:cons ':name (name msg))
))
;//! \htmlinclude SetCurrentTcp-response.msg.html

(cl:defclass <SetCurrentTcp-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass SetCurrentTcp-response (<SetCurrentTcp-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SetCurrentTcp-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SetCurrentTcp-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name dsr_msgs-srv:<SetCurrentTcp-response> is deprecated: use dsr_msgs-srv:SetCurrentTcp-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <SetCurrentTcp-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader dsr_msgs-srv:success-val is deprecated.  Use dsr_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SetCurrentTcp-response>) ostream)
  "Serializes a message object of type '<SetCurrentTcp-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SetCurrentTcp-response>) istream)
  "Deserializes a message object of type '<SetCurrentTcp-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SetCurrentTcp-response>)))
  "Returns string type for a service object of type '<SetCurrentTcp-response>"
  "dsr_msgs/SetCurrentTcpResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentTcp-response)))
  "Returns string type for a service object of type 'SetCurrentTcp-response"
  "dsr_msgs/SetCurrentTcpResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SetCurrentTcp-response>)))
  "Returns md5sum for a message object of type '<SetCurrentTcp-response>"
  "d08a3b641c2f8680fbdfb1ea2e17a3e1")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SetCurrentTcp-response)))
  "Returns md5sum for a message object of type 'SetCurrentTcp-response"
  "d08a3b641c2f8680fbdfb1ea2e17a3e1")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SetCurrentTcp-response>)))
  "Returns full string definition for message of type '<SetCurrentTcp-response>"
  (cl:format cl:nil "bool           success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SetCurrentTcp-response)))
  "Returns full string definition for message of type 'SetCurrentTcp-response"
  (cl:format cl:nil "bool           success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SetCurrentTcp-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SetCurrentTcp-response>))
  "Converts a ROS message object to a list"
  (cl:list 'SetCurrentTcp-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'SetCurrentTcp)))
  'SetCurrentTcp-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'SetCurrentTcp)))
  'SetCurrentTcp-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SetCurrentTcp)))
  "Returns string type for a service object of type '<SetCurrentTcp>"
  "dsr_msgs/SetCurrentTcp")