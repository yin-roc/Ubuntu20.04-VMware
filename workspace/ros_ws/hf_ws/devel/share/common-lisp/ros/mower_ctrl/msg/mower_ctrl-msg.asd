
(cl:in-package :asdf)

(defsystem "mower_ctrl-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "CtrlCommand" :depends-on ("_package_CtrlCommand"))
    (:file "_package_CtrlCommand" :depends-on ("_package"))
    (:file "ModeSwitch" :depends-on ("_package_ModeSwitch"))
    (:file "_package_ModeSwitch" :depends-on ("_package"))
    (:file "SensorValue" :depends-on ("_package_SensorValue"))
    (:file "_package_SensorValue" :depends-on ("_package"))
  ))