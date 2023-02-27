function [data, info] = test
%Test gives an empty data for test1_msgs/Test
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'test1_msgs/Test';
[data.num, info.num] = ros.internal.ros2.messages.ros2.default_type('double',1,0);
info.MessageType = 'test1_msgs/Test';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'num';
