# InSituNeedle_Manipulation_FBG_FEM_ROS2
This repo tries to set the project in FBG_MATLAB on ROS2

## Custom msg and srv type in matlab ##
Place ros2 .msg file in ./needle_simulation_control/custom/package_name/msg

Place ros2 .srv file in ./needle_simulation_control/custom/package_name/srv


##Automatically remove and auto build the matlab_ros2 workspace ##


    generate_ros2msg(pwd)
pwd: the absolute dir of ./needle_simulation_control

For matlab_ros2 communication, see:

test_matlabros_class.m

test_MatlabRosSrvCli.m


#Usage#

Publisher node: 

Recieve data from the interrogator.


    ros2 run sm130_interrogator talker

Server node: 

Provide curvature calculation service, which also sub to the aforementioned pub.


    ros2 run curvature_srvcli server

Or using launch file:

    ro2 launch curvature_srvcli curvature_launch.xml

##Other executable ##

Client node:

    ros2 run curvature_srvcli client

Publihser node for matlab pubsub communication:

Publishing curvature.msg to matlab. 

    ros2 run curvature_srvcli publisher
    ros2 launch curvature_srvcli sm130_launch.xml


## gazebo_ros_pkgs
This package is required for simulation in *Gazebo*.

## philos
This package contains a complete robot description as well as elementary *roscontrol* parameters for a basic simulation in *Gazebo* and *RViz*
The two launch files, *spawn.launch* and *rviz.launch* can be used.

## philos_moveit_config
This package contains motion planning simulation of the robot with *MoveIt!*. You will need to install *MoveIt!* onto your system by using `sudo apt-get install ros-kinetic-moveit`. 
The robot description is exactly the same as in the *philos* package.
You will likely encounter error upon compilation saying the *eigen* library is not found. That is because *MoveIt!* will try to find the library by referring it to *eigen3*. To address this error, simply use your favorite text editor and replace *eigen3* with *Eigen*. You may have to repeat this for a couple of times in order to successfully compile this package.

# Usage
Once you have ROS, *MoveIt!*, and Eigen installed and configured,
```
roscd
cd ./src
git clone https://github.com/YanzhouWang/philos_project.git
roscd
catkin_make
```
To get the best result, make sure to check out my [robot_kinematics](https://github.com/YanzhouWang/robot_kinematics) program and do some calculations before make any design changes in the robot description.

# Launch Files
To launch *RViz* alone (for quick examination of configuration)
`roslaunch philos rviz.launch`

To launch *Gazebo and RViz*
`roslaunch philos spawn.launch `

To launch *MoveIt!*
`roslaunch philos_moveit_config demo.launch`

To launch *MoveIt! Setup Wizard*
`roslaunch philos_moveit_config setup_assistant.launch`

