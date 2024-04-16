;; Auto-generated. Do not edit!


(when (boundp 'mower_ctrl::ModeSwitch)
  (if (not (find-package "MOWER_CTRL"))
    (make-package "MOWER_CTRL"))
  (shadow 'ModeSwitch (find-package "MOWER_CTRL")))
(unless (find-package "MOWER_CTRL::MODESWITCH")
  (make-package "MOWER_CTRL::MODESWITCH"))

(in-package "ROS")
;;//! \htmlinclude ModeSwitch.msg.html


(intern "*MOTION_MODE_STEERING*" (find-package "MOWER_CTRL::MODESWITCH"))
(shadow '*MOTION_MODE_STEERING* (find-package "MOWER_CTRL::MODESWITCH"))
(defconstant mower_ctrl::ModeSwitch::*MOTION_MODE_STEERING* 0)
(intern "*MOTION_MODE_TRANSLATION*" (find-package "MOWER_CTRL::MODESWITCH"))
(shadow '*MOTION_MODE_TRANSLATION* (find-package "MOWER_CTRL::MODESWITCH"))
(defconstant mower_ctrl::ModeSwitch::*MOTION_MODE_TRANSLATION* 1)
(intern "*MOTION_MODE_ROTATION*" (find-package "MOWER_CTRL::MODESWITCH"))
(shadow '*MOTION_MODE_ROTATION* (find-package "MOWER_CTRL::MODESWITCH"))
(defconstant mower_ctrl::ModeSwitch::*MOTION_MODE_ROTATION* 2)

(defun mower_ctrl::ModeSwitch-to-symbol (const)
  (cond
        ((= const 0) 'mower_ctrl::ModeSwitch::*MOTION_MODE_STEERING*)
        ((= const 1) 'mower_ctrl::ModeSwitch::*MOTION_MODE_TRANSLATION*)
        ((= const 2) 'mower_ctrl::ModeSwitch::*MOTION_MODE_ROTATION*)
        (t nil)))

(defclass mower_ctrl::ModeSwitch
  :super ros::object
  :slots (_target_mode ))

(defmethod mower_ctrl::ModeSwitch
  (:init
   (&key
    ((:target_mode __target_mode) 0)
    )
   (send-super :init)
   (setq _target_mode (round __target_mode))
   self)
  (:target_mode
   (&optional __target_mode)
   (if __target_mode (setq _target_mode __target_mode)) _target_mode)
  (:serialization-length
   ()
   (+
    ;; uint8 _target_mode
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _target_mode
       (write-byte _target_mode s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _target_mode
     (setq _target_mode (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get mower_ctrl::ModeSwitch :md5sum-) "21bb3ed8ffad6c72f7481393b4163913")
(setf (get mower_ctrl::ModeSwitch :datatype-) "mower_ctrl/ModeSwitch")
(setf (get mower_ctrl::ModeSwitch :definition-)
      "uint8 target_mode
uint8 MOTION_MODE_STEERING = 0
uint8 MOTION_MODE_TRANSLATION = 1
uint8 MOTION_MODE_ROTATION = 2
")



(provide :mower_ctrl/ModeSwitch "21bb3ed8ffad6c72f7481393b4163913")


