from .srvcli_member_function import FindNormCli
import rclpy

def main():

    rclpy.init()

    client = FindNormCli()


    response = client.send_request()
    print(response)
    print("get one response")


    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
