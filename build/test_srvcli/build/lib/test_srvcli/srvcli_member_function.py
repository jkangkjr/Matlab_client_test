from test1_msgs.srv import FindNorm
from test1_msgs.msg import Test

import rclpy
from rclpy.node import Node

class FindNormSrv(Node):

    def __init__(self):
        super().__init__('FindNorm_srv')
        self.srv = self.create_service(FindNorm,'FindNorm',self.FindNorm_callback)
    
    
    def FindNorm_callback(self,request,response):
        print("requested")
        response.norm.num = abs(request.input.num)
        return response

class FindNormCli(Node):

    def __init__(self):
        super().__init__('FindNorm_cli')
        self.cli = self.create_client(FindNorm,'FindNorm')

        self.req = FindNorm.Request()

    def send_request(self):
            
        num = Test()
        num.num = -1.0
        self.req.input = num
    
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self,self.future)
        return self.future.result()

