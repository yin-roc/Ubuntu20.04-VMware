;; Auto-generated. Do not edit!


(when (boundp 'plumbing_pub_sub_msg::person)
  (if (not (find-package "PLUMBING_PUB_SUB_MSG"))
    (make-package "PLUMBING_PUB_SUB_MSG"))
  (shadow 'person (find-package "PLUMBING_PUB_SUB_MSG")))
(unless (find-package "PLUMBING_PUB_SUB_MSG::PERSON")
  (make-package "PLUMBING_PUB_SUB_MSG::PERSON"))

(in-package "ROS")
;;//! \htmlinclude person.msg.html


(defclass plumbing_pub_sub_msg::person
  :super ros::object
  :slots (_name _age ))

(defmethod plumbing_pub_sub_msg::person
  (:init
   (&key
    ((:name __name) "")
    ((:age __age) 0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _age (round __age))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:age
   (&optional __age)
   (if __age (setq _age __age)) _age)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; uint16 _age
    2
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; uint16 _age
       (write-word _age s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; uint16 _age
     (setq _age (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;;
   self)
  )

(setf (get plumbing_pub_sub_msg::person :md5sum-) "7e88a18563a23cde36edcf14cef73c11")
(setf (get plumbing_pub_sub_msg::person :datatype-) "plumbing_pub_sub_msg/person")
(setf (get plumbing_pub_sub_msg::person :definition-)
      "string name
uint16 age
")



(provide :plumbing_pub_sub_msg/person "7e88a18563a23cde36edcf14cef73c11")


