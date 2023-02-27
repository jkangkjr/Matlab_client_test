function [data, info] = findNormResponse
%FindNorm gives an empty data for test1_msgs/FindNormResponse
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'test1_msgs/FindNormResponse';
[data.norm, info.norm] = ros.internal.ros2.custommessages.test1_msgs.test;
info.norm.MLdataType = 'struct';
info.MessageType = 'test1_msgs/FindNormResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'norm';
info.MatPath{2} = 'norm.num';
