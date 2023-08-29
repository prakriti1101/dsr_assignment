# Install script for directory: /home/prakriti/arm_ws/src/doosan-robot/dsr_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/prakriti/arm_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/msg" TYPE FILE FILES
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/LogAlarm.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/ModbusState.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/RobotError.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/RobotState.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/RobotStop.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/JogMultiAxis.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/AlterMotionStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/ServoJStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/ServoLStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/SpeedJStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/SpeedLStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/RobotStateRT.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/ServoJRTStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/ServoLRTStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/SpeedJRTStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/SpeedLRTStream.msg"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/msg/TorqueRTStream.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/srv" TYPE FILE FILES
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotSystem.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotSystem.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotSpeedMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotSpeedMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetCurrentPose.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetSafeStopResetType.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetLastAlarm.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/GetRobotState.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetRobotControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/ManageAccessControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/ReleaseProtectiveStop.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./system/SetSafetyMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveJoint.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveLine.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveJointx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveCircle.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSplineJoint.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSplineTask.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveBlending.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveSpiral.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MovePeriodic.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveWait.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/Jog.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/JogMulti.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveStop.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MovePause.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveResume.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/Trans.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/Fkin.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/Ikin.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/IkinEx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/SetRefCoord.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/MoveHome.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/CheckMotion.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/ChangeOperationSpeed.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/EnableAlterMotion.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/AlterMotion.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/DisableAlterMotion.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./motion/SetSingularityHandling.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetControlMode.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetControlSpace.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentPosj.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredPosj.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentVelj.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredVelj.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentPosx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentToolFlangePosx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentVelx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredPosx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetDesiredVelx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentSolutionSpace.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetCurrentRotm.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetJointTorque.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetExternalTorque.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetToolForce.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetSolutionSpace.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./aux_control/GetOrientationError.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/ParallelAxis1.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/ParallelAxis2.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/AlignAxis1.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/AlignAxis2.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/IsDoneBoltTightening.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/ReleaseComplianceCtrl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/TaskComplianceCtrl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/SetStiffnessx.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CalcCoord.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord1.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord2.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/SetUserCartCoord3.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/OverwriteUserCartCoord.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/GetUserCartCoord.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/SetDesiredForce.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/ReleaseForce.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckPositionCondition.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckForceCondition.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckOrientationCondition1.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CheckOrientationCondition2.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/CoordTransform.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/GetWorkpieceWeight.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./force/ResetWorkpieceWeight.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tool/ConfigCreateTool.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tool/ConfigDeleteTool.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tool/SetCurrentTool.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tool/GetCurrentTool.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tool/SetToolShape.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tcp/ConfigCreateTcp.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tcp/ConfigDeleteTcp.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tcp/SetCurrentTcp.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./tcp/GetCurrentTcp.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/SetToolDigitalOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/GetToolDigitalOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/GetToolDigitalInput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxDigitalOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxDigitalOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxDigitalInput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogInputType.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogOutputType.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/SetCtrlBoxAnalogOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./io/GetCtrlBoxAnalogInput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./modbus/ConfigCreateModbus.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./modbus/ConfigDeleteModbus.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./modbus/SetModbusOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./modbus/GetModbusInput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlStart.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlStop.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlPause.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./drl/DrlResume.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./drl/GetDrlState.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FClose.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FOpen.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./gripper/Robotiq2FMove.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./gripper/SerialSendData.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/ConnectRTControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/DisconnectRTControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlInputDataList.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlInputVersionList.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlOutputDataList.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/GetRTControlOutputVersionList.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/ReadDataRT.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetAccJRT.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetAccXRT.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetRTControlInput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetRTControlOutput.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetVelJRT.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/SetVelXRT.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/StartRTControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/StopRTControl.srv"
    "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/srv/./realtime/WriteDataRT.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES "/home/prakriti/arm_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/prakriti/arm_ws/devel/include/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/prakriti/arm_ws/devel/share/roseus/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/prakriti/arm_ws/devel/share/common-lisp/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/prakriti/arm_ws/devel/share/gennodejs/ros/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/prakriti/arm_ws/devel/lib/python3/dist-packages/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/prakriti/arm_ws/devel/lib/python3/dist-packages/dsr_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/prakriti/arm_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES "/home/prakriti/arm_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs/cmake" TYPE FILE FILES
    "/home/prakriti/arm_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgsConfig.cmake"
    "/home/prakriti/arm_ws/build/doosan-robot/dsr_msgs/catkin_generated/installspace/dsr_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dsr_msgs" TYPE FILE FILES "/home/prakriti/arm_ws/src/doosan-robot/dsr_msgs/package.xml")
endif()

