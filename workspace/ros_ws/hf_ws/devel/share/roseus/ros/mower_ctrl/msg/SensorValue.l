;; Auto-generated. Do not edit!


(when (boundp 'mower_ctrl::SensorValue)
  (if (not (find-package "MOWER_CTRL"))
    (make-package "MOWER_CTRL"))
  (shadow 'SensorValue (find-package "MOWER_CTRL")))
(unless (find-package "MOWER_CTRL::SENSORVALUE")
  (make-package "MOWER_CTRL::SENSORVALUE"))

(in-package "ROS")
;;//! \htmlinclude SensorValue.msg.html


(defclass mower_ctrl::SensorValue
  :super ros::object
  :slots (_col_data1 _col_data2 _col_data3 _col_data4 _ul_data1 _ul_data2 _ul_data3 _ul_data4 _distance _carpipe _rollpipe _nowcar_speed ))

(defmethod mower_ctrl::SensorValue
  (:init
   (&key
    ((:col_data1 __col_data1) 0)
    ((:col_data2 __col_data2) 0)
    ((:col_data3 __col_data3) 0)
    ((:col_data4 __col_data4) 0)
    ((:ul_data1 __ul_data1) 0)
    ((:ul_data2 __ul_data2) 0)
    ((:ul_data3 __ul_data3) 0)
    ((:ul_data4 __ul_data4) 0)
    ((:distance __distance) 0)
    ((:carpipe __carpipe) 0)
    ((:rollpipe __rollpipe) 0)
    ((:nowcar_speed __nowcar_speed) 0.0)
    )
   (send-super :init)
   (setq _col_data1 (round __col_data1))
   (setq _col_data2 (round __col_data2))
   (setq _col_data3 (round __col_data3))
   (setq _col_data4 (round __col_data4))
   (setq _ul_data1 (round __ul_data1))
   (setq _ul_data2 (round __ul_data2))
   (setq _ul_data3 (round __ul_data3))
   (setq _ul_data4 (round __ul_data4))
   (setq _distance (round __distance))
   (setq _carpipe (round __carpipe))
   (setq _rollpipe (round __rollpipe))
   (setq _nowcar_speed (float __nowcar_speed))
   self)
  (:col_data1
   (&optional __col_data1)
   (if __col_data1 (setq _col_data1 __col_data1)) _col_data1)
  (:col_data2
   (&optional __col_data2)
   (if __col_data2 (setq _col_data2 __col_data2)) _col_data2)
  (:col_data3
   (&optional __col_data3)
   (if __col_data3 (setq _col_data3 __col_data3)) _col_data3)
  (:col_data4
   (&optional __col_data4)
   (if __col_data4 (setq _col_data4 __col_data4)) _col_data4)
  (:ul_data1
   (&optional __ul_data1)
   (if __ul_data1 (setq _ul_data1 __ul_data1)) _ul_data1)
  (:ul_data2
   (&optional __ul_data2)
   (if __ul_data2 (setq _ul_data2 __ul_data2)) _ul_data2)
  (:ul_data3
   (&optional __ul_data3)
   (if __ul_data3 (setq _ul_data3 __ul_data3)) _ul_data3)
  (:ul_data4
   (&optional __ul_data4)
   (if __ul_data4 (setq _ul_data4 __ul_data4)) _ul_data4)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:carpipe
   (&optional __carpipe)
   (if __carpipe (setq _carpipe __carpipe)) _carpipe)
  (:rollpipe
   (&optional __rollpipe)
   (if __rollpipe (setq _rollpipe __rollpipe)) _rollpipe)
  (:nowcar_speed
   (&optional __nowcar_speed)
   (if __nowcar_speed (setq _nowcar_speed __nowcar_speed)) _nowcar_speed)
  (:serialization-length
   ()
   (+
    ;; uint8 _col_data1
    1
    ;; uint8 _col_data2
    1
    ;; uint8 _col_data3
    1
    ;; uint8 _col_data4
    1
    ;; uint16 _ul_data1
    2
    ;; uint16 _ul_data2
    2
    ;; uint16 _ul_data3
    2
    ;; uint16 _ul_data4
    2
    ;; uint32 _distance
    4
    ;; uint8 _carpipe
    1
    ;; uint8 _rollpipe
    1
    ;; float32 _nowcar_speed
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _col_data1
       (write-byte _col_data1 s)
     ;; uint8 _col_data2
       (write-byte _col_data2 s)
     ;; uint8 _col_data3
       (write-byte _col_data3 s)
     ;; uint8 _col_data4
       (write-byte _col_data4 s)
     ;; uint16 _ul_data1
       (write-word _ul_data1 s)
     ;; uint16 _ul_data2
       (write-word _ul_data2 s)
     ;; uint16 _ul_data3
       (write-word _ul_data3 s)
     ;; uint16 _ul_data4
       (write-word _ul_data4 s)
     ;; uint32 _distance
       (write-long _distance s)
     ;; uint8 _carpipe
       (write-byte _carpipe s)
     ;; uint8 _rollpipe
       (write-byte _rollpipe s)
     ;; float32 _nowcar_speed
       (sys::poke _nowcar_speed (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _col_data1
     (setq _col_data1 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _col_data2
     (setq _col_data2 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _col_data3
     (setq _col_data3 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _col_data4
     (setq _col_data4 (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint16 _ul_data1
     (setq _ul_data1 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _ul_data2
     (setq _ul_data2 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _ul_data3
     (setq _ul_data3 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _ul_data4
     (setq _ul_data4 (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint32 _distance
     (setq _distance (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint8 _carpipe
     (setq _carpipe (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _rollpipe
     (setq _rollpipe (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; float32 _nowcar_speed
     (setq _nowcar_speed (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get mower_ctrl::SensorValue :md5sum-) "6b1c1b5327ee628950d965f31630e649")
(setf (get mower_ctrl::SensorValue :datatype-) "mower_ctrl/SensorValue")
(setf (get mower_ctrl::SensorValue :definition-)
      "uint8 col_data1
uint8 col_data2
uint8 col_data3
uint8 col_data4
uint16 ul_data1
uint16 ul_data2
uint16 ul_data3
uint16 ul_data4
uint32 distance
uint8 carpipe
uint8 rollpipe
float32 nowcar_speed
")



(provide :mower_ctrl/SensorValue "6b1c1b5327ee628950d965f31630e649")


