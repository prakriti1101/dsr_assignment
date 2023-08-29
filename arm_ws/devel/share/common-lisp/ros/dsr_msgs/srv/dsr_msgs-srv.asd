
(cl:in-package :asdf)

(defsystem "dsr_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :dsr_msgs-msg
)
  :components ((:file "_package")
    (:file "ConnectRTControl" :depends-on ("_package_ConnectRTControl"))
    (:file "_package_ConnectRTControl" :depends-on ("_package"))
    (:file "DisconnectRTControl" :depends-on ("_package_DisconnectRTControl"))
    (:file "_package_DisconnectRTControl" :depends-on ("_package"))
    (:file "GetRTControlInputDataList" :depends-on ("_package_GetRTControlInputDataList"))
    (:file "_package_GetRTControlInputDataList" :depends-on ("_package"))
    (:file "GetRTControlInputVersionList" :depends-on ("_package_GetRTControlInputVersionList"))
    (:file "_package_GetRTControlInputVersionList" :depends-on ("_package"))
    (:file "GetRTControlOutputDataList" :depends-on ("_package_GetRTControlOutputDataList"))
    (:file "_package_GetRTControlOutputDataList" :depends-on ("_package"))
    (:file "GetRTControlOutputVersionList" :depends-on ("_package_GetRTControlOutputVersionList"))
    (:file "_package_GetRTControlOutputVersionList" :depends-on ("_package"))
    (:file "ReadDataRT" :depends-on ("_package_ReadDataRT"))
    (:file "_package_ReadDataRT" :depends-on ("_package"))
    (:file "SetAccJRT" :depends-on ("_package_SetAccJRT"))
    (:file "_package_SetAccJRT" :depends-on ("_package"))
    (:file "SetAccXRT" :depends-on ("_package_SetAccXRT"))
    (:file "_package_SetAccXRT" :depends-on ("_package"))
    (:file "SetRTControlInput" :depends-on ("_package_SetRTControlInput"))
    (:file "_package_SetRTControlInput" :depends-on ("_package"))
    (:file "SetRTControlOutput" :depends-on ("_package_SetRTControlOutput"))
    (:file "_package_SetRTControlOutput" :depends-on ("_package"))
    (:file "SetVelJRT" :depends-on ("_package_SetVelJRT"))
    (:file "_package_SetVelJRT" :depends-on ("_package"))
    (:file "SetVelXRT" :depends-on ("_package_SetVelXRT"))
    (:file "_package_SetVelXRT" :depends-on ("_package"))
    (:file "StartRTControl" :depends-on ("_package_StartRTControl"))
    (:file "_package_StartRTControl" :depends-on ("_package"))
    (:file "StopRTControl" :depends-on ("_package_StopRTControl"))
    (:file "_package_StopRTControl" :depends-on ("_package"))
    (:file "WriteDataRT" :depends-on ("_package_WriteDataRT"))
    (:file "_package_WriteDataRT" :depends-on ("_package"))
  ))