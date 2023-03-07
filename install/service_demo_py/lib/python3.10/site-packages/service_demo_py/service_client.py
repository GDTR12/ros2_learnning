import rclpy as rp
from rclpy.node import Node
from rclpy.logging import get_logger
import sys
# import os
# path = os.path.join(sys.path[0],"../../../install/plumbing_interface_demo/local/lib/python3.10/dist-packages/plumbing_interface_demo/srv")
# print(path)
# sys.path.append(path)

from plumbing_interface_demo.srv import ServiceMsg

class ServiceClient(Node):
    def __init__(self):
        super().__init__("ServiceClient")
        self.get_logger().info("Create node of ServiceClient")
        self.client = self.create_client(ServiceMsg,"ServiceNode")
        while not self.client.wait_for_service(1.0):
            self.get_logger().info("Connecting Server...")
        self.get_logger().info("Connected successful!")
    
    def send_request(self):
        request = ServiceMsg.Request()
        request.data1 = int(sys.argv[1])
        request.data2 = int(sys.argv[2])
        self.future = self.client.call_async(request)


def main():
    if len(sys.argv) != 3:
        get_logger("main").info("The data you have submited has wrong format!")
        return
    
    rp.init()
    client = ServiceClient()
    client.send_request()
    rp.spin_until_future_complete(client,client.future)
    try:
        response = client.future.result()
        client.get_logger().info("Response successful:sum = %ld" % response.sum)
    except:
        client.get_logger().error("Response failed")
    rp.shutdown()



if __name__ == '__main__':
    main()