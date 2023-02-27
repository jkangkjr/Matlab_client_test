function ros2msg = test1_msgs_msg_Test_1To2_Converter(message,ros2msg)
%test1_msgs_msg_Test_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.num = message.Num;
end