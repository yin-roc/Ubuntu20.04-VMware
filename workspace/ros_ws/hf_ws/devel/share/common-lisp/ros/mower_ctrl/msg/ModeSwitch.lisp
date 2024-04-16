; Auto-generated. Do not edit!


(cl:in-package mower_ctrl-msg)


;//! \htmlinclude ModeSwitch.msg.html

(cl:defclass <ModeSwitch> (roslisp-msg-protocol:ros-message)
  ((target_mode
    :reader target_mode
    :initarg :target_mode
    :type cl:fixnum
    :initform 0))
)

(cl:defclass ModeSwitch (<ModeSwitch>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ModeSwitch>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ModeSwitch)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mower_ctrl-msg:<ModeSwitch> is deprecated: use mower_ctrl-msg:ModeSwitch instead.")))

(cl:ensure-generic-function 'target_mode-val :lambda-list '(m))
(cl:defmethod target_mode-val ((m <ModeSwitch>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:target_mode-val is deprecated.  Use mower_ctrl-msg:target_mode instead.")
  (target_mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<ModeSwitch>)))
    "Constants for message type '<ModeSwitch>"
  '((:MOTION_MODE_STEERING . 0)
    (:MOTION_MODE_TRANSLATION . 1)
    (:MOTION_MODE_ROTATION . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'ModeSwitch)))
    "Constants for message type 'ModeSwitch"
  '((:MOTION_MODE_STEERING . 0)
    (:MOTION_MODE_TRANSLATION . 1)
    (:MOTION_MODE_ROTATION . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ModeSwitch>) ostream)
  "Serializes a message object of type '<ModeSwitch>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_mode)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ModeSwitch>) istream)
  "Deserializes a message object of type '<ModeSwitch>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'target_mode)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ModeSwitch>)))
  "Returns string type for a message object of type '<ModeSwitch>"
  "mower_ctrl/ModeSwitch")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ModeSwitch)))
  "Returns string type for a message object of type 'ModeSwitch"
  "mower_ctrl/ModeSwitch")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ModeSwitch>)))
  "Returns md5sum for a message object of type '<ModeSwitch>"
  "21bb3ed8ffad6c72f7481393b4163913")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ModeSwitch)))
  "Returns md5sum for a message object of type 'ModeSwitch"
  "21bb3ed8ffad6c72f7481393b4163913")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ModeSwitch>)))
  "Returns full string definition for message of type '<ModeSwitch>"
  (cl:format cl:nil "uint8 target_mode~%uint8 MOTION_MODE_STEERING = 0~%uint8 MOTION_MODE_TRANSLATION = 1~%uint8 MOTION_MODE_ROTATION = 2~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ModeSwitch)))
  "Returns full string definition for message of type 'ModeSwitch"
  (cl:format cl:nil "uint8 target_mode~%uint8 MOTION_MODE_STEERING = 0~%uint8 MOTION_MODE_TRANSLATION = 1~%uint8 MOTION_MODE_ROTATION = 2~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ModeSwitch>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ModeSwitch>))
  "Converts a ROS message object to a list"
  (cl:list 'ModeSwitch
    (cl:cons ':target_mode (target_mode msg))
))
