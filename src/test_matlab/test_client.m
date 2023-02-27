% %build custom msg and srv typ: test1_msgs/Test.msg and tes1_msgs/FindNorm.srv

% folderPath = fullfile(pwd,"custom");
% ros2genmsg(folderPath)
%% build and send service client to python service outside of matlab 
clc
clear all

cli_node = ros2node('/cli_node')

client = ros2svcclient(cli_node,"/FindNorm","test1_msgs/FindNorm")

% both waitForServer and isServerAvailable returns true, but no response from server 
[connectionStatus,connectionStatustext] = waitForServer(client);

% create request message
request = ros2message(client);
input_struc = ros2message("test1_msgs/Test")
input_struc.num = -1.0;
request.input = input_struc;

if(isServerAvailable(client))
    response = call(client,request);
end
