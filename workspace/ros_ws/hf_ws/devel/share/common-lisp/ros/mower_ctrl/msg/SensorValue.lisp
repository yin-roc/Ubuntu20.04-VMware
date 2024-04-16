; Auto-generated. Do not edit!


(cl:in-package mower_ctrl-msg)


;//! \htmlinclude SensorValue.msg.html

(cl:defclass <SensorValue> (roslisp-msg-protocol:ros-message)
  ((col_data1
    :reader col_data1
    :initarg :col_data1
    :type cl:fixnum
    :initform 0)
   (col_data2
    :reader col_data2
    :initarg :col_data2
    :type cl:fixnum
    :initform 0)
   (col_data3
    :reader col_data3
    :initarg :col_data3
    :type cl:fixnum
    :initform 0)
   (col_data4
    :reader col_data4
    :initarg :col_data4
    :type cl:fixnum
    :initform 0)
   (ul_data1
    :reader ul_data1
    :initarg :ul_data1
    :type cl:fixnum
    :initform 0)
   (ul_data2
    :reader ul_data2
    :initarg :ul_data2
    :type cl:fixnum
    :initform 0)
   (ul_data3
    :reader ul_data3
    :initarg :ul_data3
    :type cl:fixnum
    :initform 0)
   (ul_data4
    :reader ul_data4
    :initarg :ul_data4
    :type cl:fixnum
    :initform 0)
   (distance
    :reader distance
    :initarg :distance
    :type cl:integer
    :initform 0)
   (carpipe
    :reader carpipe
    :initarg :carpipe
    :type cl:fixnum
    :initform 0)
   (rollpipe
    :reader rollpipe
    :initarg :rollpipe
    :type cl:fixnum
    :initform 0)
   (nowcar_speed
    :reader nowcar_speed
    :initarg :nowcar_speed
    :type cl:float
    :initform 0.0))
)

(cl:defclass SensorValue (<SensorValue>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SensorValue>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SensorValue)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name mower_ctrl-msg:<SensorValue> is deprecated: use mower_ctrl-msg:SensorValue instead.")))

(cl:ensure-generic-function 'col_data1-val :lambda-list '(m))
(cl:defmethod col_data1-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:col_data1-val is deprecated.  Use mower_ctrl-msg:col_data1 instead.")
  (col_data1 m))

(cl:ensure-generic-function 'col_data2-val :lambda-list '(m))
(cl:defmethod col_data2-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:col_data2-val is deprecated.  Use mower_ctrl-msg:col_data2 instead.")
  (col_data2 m))

(cl:ensure-generic-function 'col_data3-val :lambda-list '(m))
(cl:defmethod col_data3-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:col_data3-val is deprecated.  Use mower_ctrl-msg:col_data3 instead.")
  (col_data3 m))

(cl:ensure-generic-function 'col_data4-val :lambda-list '(m))
(cl:defmethod col_data4-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:col_data4-val is deprecated.  Use mower_ctrl-msg:col_data4 instead.")
  (col_data4 m))

(cl:ensure-generic-function 'ul_data1-val :lambda-list '(m))
(cl:defmethod ul_data1-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:ul_data1-val is deprecated.  Use mower_ctrl-msg:ul_data1 instead.")
  (ul_data1 m))

(cl:ensure-generic-function 'ul_data2-val :lambda-list '(m))
(cl:defmethod ul_data2-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:ul_data2-val is deprecated.  Use mower_ctrl-msg:ul_data2 instead.")
  (ul_data2 m))

(cl:ensure-generic-function 'ul_data3-val :lambda-list '(m))
(cl:defmethod ul_data3-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:ul_data3-val is deprecated.  Use mower_ctrl-msg:ul_data3 instead.")
  (ul_data3 m))

(cl:ensure-generic-function 'ul_data4-val :lambda-list '(m))
(cl:defmethod ul_data4-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:ul_data4-val is deprecated.  Use mower_ctrl-msg:ul_data4 instead.")
  (ul_data4 m))

(cl:ensure-generic-function 'distance-val :lambda-list '(m))
(cl:defmethod distance-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:distance-val is deprecated.  Use mower_ctrl-msg:distance instead.")
  (distance m))

(cl:ensure-generic-function 'carpipe-val :lambda-list '(m))
(cl:defmethod carpipe-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:carpipe-val is deprecated.  Use mower_ctrl-msg:carpipe instead.")
  (carpipe m))

(cl:ensure-generic-function 'rollpipe-val :lambda-list '(m))
(cl:defmethod rollpipe-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:rollpipe-val is deprecated.  Use mower_ctrl-msg:rollpipe instead.")
  (rollpipe m))

(cl:ensure-generic-function 'nowcar_speed-val :lambda-list '(m))
(cl:defmethod nowcar_speed-val ((m <SensorValue>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader mower_ctrl-msg:nowcar_speed-val is deprecated.  Use mower_ctrl-msg:nowcar_speed instead.")
  (nowcar_speed m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SensorValue>) ostream)
  "Serializes a message object of type '<SensorValue>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data1)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data2)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data3)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data4)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'distance)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'carpipe)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rollpipe)) ostream)
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'nowcar_speed))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SensorValue>) istream)
  "Deserializes a message object of type '<SensorValue>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'col_data4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data1)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data2)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data3)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'ul_data4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'ul_data4)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) (cl:slot-value msg 'distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) (cl:slot-value msg 'distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) (cl:slot-value msg 'distance)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'carpipe)) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'rollpipe)) (cl:read-byte istream))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'nowcar_speed) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SensorValue>)))
  "Returns string type for a message object of type '<SensorValue>"
  "mower_ctrl/SensorValue")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SensorValue)))
  "Returns string type for a message object of type 'SensorValue"
  "mower_ctrl/SensorValue")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SensorValue>)))
  "Returns md5sum for a message object of type '<SensorValue>"
  "6b1c1b5327ee628950d965f31630e649")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SensorValue)))
  "Returns md5sum for a message object of type 'SensorValue"
  "6b1c1b5327ee628950d965f31630e649")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SensorValue>)))
  "Returns full string definition for message of type '<SensorValue>"
  (cl:format cl:nil "uint8 col_data1~%uint8 col_data2~%uint8 col_data3~%uint8 col_data4~%uint16 ul_data1~%uint16 ul_data2~%uint16 ul_data3~%uint16 ul_data4~%uint32 distance~%uint8 carpipe~%uint8 rollpipe~%float32 nowcar_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SensorValue)))
  "Returns full string definition for message of type 'SensorValue"
  (cl:format cl:nil "uint8 col_data1~%uint8 col_data2~%uint8 col_data3~%uint8 col_data4~%uint16 ul_data1~%uint16 ul_data2~%uint16 ul_data3~%uint16 ul_data4~%uint32 distance~%uint8 carpipe~%uint8 rollpipe~%float32 nowcar_speed~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SensorValue>))
  (cl:+ 0
     1
     1
     1
     1
     2
     2
     2
     2
     4
     1
     1
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SensorValue>))
  "Converts a ROS message object to a list"
  (cl:list 'SensorValue
    (cl:cons ':col_data1 (col_data1 msg))
    (cl:cons ':col_data2 (col_data2 msg))
    (cl:cons ':col_data3 (col_data3 msg))
    (cl:cons ':col_data4 (col_data4 msg))
    (cl:cons ':ul_data1 (ul_data1 msg))
    (cl:cons ':ul_data2 (ul_data2 msg))
    (cl:cons ':ul_data3 (ul_data3 msg))
    (cl:cons ':ul_data4 (ul_data4 msg))
    (cl:cons ':distance (distance msg))
    (cl:cons ':carpipe (carpipe msg))
    (cl:cons ':rollpipe (rollpipe msg))
    (cl:cons ':nowcar_speed (nowcar_speed msg))
))
