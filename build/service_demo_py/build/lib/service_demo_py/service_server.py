import rclpy as rp
from rclpy.node import Node
from plumbing_interface_demo.srv import ServiceMsg


class ServiceServer(Node):
    def __init__(self):
        super().__init__("ServiceServer")
        self.get_logger().info("Create node of ServiceServer")
        self.server = self.create_service(ServiceMsg,"ServiceNode",self.on_request_cb)

    def on_request_cb(self,request,response):
        response.sum = request.data1 + request.data2
        self.get_logger().info("%d + %d = %d" % (request.data1, request.data2, response.sum))
        return response

def main():
    rp.init()
    rp.spin(ServiceServer())
    rp.shutdown()



if __name__ == '__main__':
    main()