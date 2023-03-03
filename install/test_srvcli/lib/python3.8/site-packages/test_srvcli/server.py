from .srvcli_member_function import FindNormSrv
import rclpy

def main():

    rclpy.init()
    
    server = FindNormSrv()
    
    rclpy.spin(server)

    rclpy.shutdown()


if __name__ == '__main__':
    main()