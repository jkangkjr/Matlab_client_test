function ros1msg = test1_msgs_msg_Test_2To1_Converter(message,ros1msg)
%test1_msgs_msg_Test_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Num = message.num;
end