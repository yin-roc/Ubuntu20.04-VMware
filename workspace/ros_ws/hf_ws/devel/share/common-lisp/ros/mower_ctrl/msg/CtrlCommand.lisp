; Auto-generated. Do not edit!


(cl:in-package mower_ctrl-msg)


;//! \htmlinclude CtrlCommand.msg.html

(cl:defclass <CtrlCommand> (roslisp-msg-protocol:ros-message)
  ((driving_speed
    :reader driving_speed
    :initarg :driving_speed
    :type cl:float
    :initform 0.0)
   (steering_angle
    :reader steering_angle
    :initarg :steering_angle
    :type cl:float
    :initform 0.0))
)

(cl:defclass CtrlCommand (<CtrlCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CtrlCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CtrlCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mower_ctrl-msg:<CtrlCommand> is deprecated: use mower_ctrl-msg:CtrlCommand instead.")))

(cl:ensure-generic-function 'driving_speed-val :lambda-list '(m))
(cl:defmethod driving_speed-val ((m <CtrlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:driving_speed-val is deprecated.  Use mower_ctrl-msg:driving_speed instead.")
  (driving_speed m))

(cl:ensure-generic-function 'steering_angle-val :lambda-list '(m))
(cl:defmethod steering_angle-val ((m <CtrlCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:steering_angle-val is deprecated.  Use mower_ctrl-msg:steering_angle instead.")
  (steering_angle m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CtrlCommand>) ostream)
  "Serializes a message object of type '<CtrlCommand>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'driving_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'steering_angle))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CtrlCommand>) istream)
  "Deserializes a message object of type '<CtrlCommand>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'driving_speed) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'steering_angle) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CtrlCommand>)))
  "Returns string type for a message object of type '<CtrlCommand>"
  "mower_ctrl/CtrlCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CtrlCommand)))
  "Returns string type for a message object of type 'CtrlCommand"
  "mower_ctrl/CtrlCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CtrlCommand>)))
  "Returns md5sum for a message object of type '<CtrlCommand>"
  "dc1417894b967b9dcd292bce2f9f4da6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CtrlCommand)))
  "Returns md5sum for a message object of type 'CtrlCommand"
  "dc1417894b967b9dcd292bce2f9f4da6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CtrlCommand>)))
  "Returns full string definition for message of type '<CtrlCommand>"
  (cl:format cl:nil "float32 driving_speed~%float32 steering_angle~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CtrlCommand)))
  "Returns full string definition for message of type 'CtrlCommand"
  (cl:format cl:nil "float32 driving_speed~%float32 steering_angle~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CtrlCommand>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CtrlCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'CtrlCommand
    (cl:cons ':driving_speed (driving_speed msg))
    (cl:cons ':steering_angle (steering_angle msg))
))
