#!/usr/bin/env python3
import sys
import copy
import rospy
import moveit_commander 
from moveit_commander import RobotCommander
import moveit_msgs.msg
import geometry_msgs.msg

moveit_commander.roscpp_initialize(sys.argv)
rospy.init_node('move_group_python_interface', anonymous=True)

# robot = moveit_commander.RobotCommander(robot_description="dsr01/robot_description")
# robot_description = "m1013"
# ns = "dsr"
# robot_commander = RobotCommander(robot_description, ns)

robot = moveit_commander.RobotCommander()
scene = moveit_commander.PlanningSceneInterface()
group_name="dsr01" 
move_group =  moveit_commander.MoveGroupCommander(group_name)
display_trajectory_publisher = rospy.Publisher('/move_group/display_planned_path', moveit_msgs.msg.DisplayTrajectory,queue_size=20)


# pose_target = geometry_msgs.msg.Pose()
# pose_target.orientation.w =  1.0
# pose_target.position.x = 0.5
# pose_target.position.y = 0.0
# pose_target.position.z  = 0.2 
# move_group.set_pose_target(pose_target)

# # plan1 = move_group.plan()
# # rospy.sleep(5)
# # moveit_commander.roscpp_shutdown

# # `go()` returns a boolean indicating whether the planning and execution was successful.
# success = move_group.go(wait=True)
# # Calling `stop()` ensures that there is no residual movement
# move_group.stop()
# # It is always good to clear your targets after planning with poses.
# # Note: there is no equivalent function for clear_joint_value_targets().
# move_group.clear_pose_targets()
