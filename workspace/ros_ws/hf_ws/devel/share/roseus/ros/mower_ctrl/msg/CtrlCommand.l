;; Auto-generated. Do not edit!


(when (boundp 'mower_ctrl::CtrlCommand)
  (if (not (find-package "MOWER_CTRL"))
    (make-package "MOWER_CTRL"))
  (shadow 'CtrlCommand (find-package "MOWER_CTRL")))
(unless (find-package "MOWER_CTRL::CTRLCOMMAND")
  (make-package "MOWER_CTRL::CTRLCOMMAND"))

(in-package "ROS")
;;//! \htmlinclude CtrlCommand.msg.html


(defclass mower_ctrl::CtrlCommand
  :super ros::object
  :slots (_driving_speed _steering_angle ))

(defmethod mower_ctrl::CtrlCommand
  (:init
   (&key
    ((:driving_speed __driving_speed) 0.0)
    ((:steering_angle __steering_angle) 0.0)
    )
   (send-super :init)
   (setq _driving_speed (float __driving_speed))
   (setq _steering_angle (float __steering_angle))
   self)
  (:driving_speed
   (&optional __driving_speed)
   (if __driving_speed (setq _driving_speed __driving_speed)) _driving_speed)
  (:steering_angle
   (&optional __steering_angle)
   (if __steering_angle (setq _steering_angle __steering_angle)) _steering_angle)
  (:serialization-length
   ()
   (+
    ;; float32 _driving_speed
    4
    ;; float32 _steering_angle
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _driving_speed
       (sys::poke _driving_speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;; float32 _steering_angle
       (sys::poke _steering_angle (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _driving_speed
     (setq _driving_speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;; float32 _steering_angle
     (setq _steering_angle (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get mower_ctrl::CtrlCommand :md5sum-) "dc1417894b967b9dcd292bce2f9f4da6")
(setf (get mower_ctrl::CtrlCommand :datatype-) "mower_ctrl/CtrlCommand")
(setf (get mower_ctrl::CtrlCommand :definition-)
      "float32 driving_speed
float32 steering_angle
")



(provide :mower_ctrl/CtrlCommand "dc1417894b967b9dcd292bce2f9f4da6")


