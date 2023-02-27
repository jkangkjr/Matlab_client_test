function [data, info] = findNormRequest
%FindNorm gives an empty data for test1_msgs/FindNormRequest
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'test1_msgs/FindNormRequest';
[data.input, info.input] = ros.internal.ros2.custommessages.test1_msgs.test;
info.input.MLdataType = 'struct';
info.MessageType = 'test1_msgs/FindNormRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'input';
info.MatPath{2} = 'input.num';
