#from test1_msgs.srv import FindNorm
#from test1_msgs.msg import Test

from example_interfaces.srv import AddTwoInts

import rclpy
from rclpy.node import Node

class FindNormSrv(Node):

    def __init__(self):
        super().__init__('FindNorm_srv')
        #self.srv = self.create_service(FindNorm,'FindNorm',self.FindNorm_callback)
        self.srv = self.create_service(AddTwoInts,'FindNorm',self.FindNorm_callback)
    
    
    def FindNorm_callback(self,request,response):
        print("requested")
        #response.norm.num = abs(request.input.num)
        response.sum = abs(request.a)
        return response

class FindNormCli(Node):

    def __init__(self):
        super().__init__('FindNorm_cli')
        #self.cli = self.create_client(FindNorm,'FindNorm')
        self.cli = self.create_client(AddTwoInts,'FindNorm')

        #self.req = FindNorm.Request()
        self.req = AddTwoInts.Request()

    def send_request(self):
    
        #sm130_subscriber = interrogator_subscriber()
        '''
        num = Test()
        num.num = -1.0
        self.req.input = num
        '''
        self.req.a = 1
        self.req.b = 1
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self,self.future)
        return self.future.result()

