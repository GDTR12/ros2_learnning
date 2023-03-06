import rclpy as rp
from rclpy.node import Node
from std_msgs.msg import String

class Listener(Node):
    def __init__(self):
        super().__init__("Listener_node_py")
        self.get_logger().info("Create instance of Listener")
        self.subscription = self.create_subscription(String, "Chatter", self.on_receive_cb,10)
    
    def on_receive_cb(self, msg):
        self.get_logger().info("Msg subscribed:%s" % msg.data)


def main():
    rp.init()
    rp.spin(Listener())
    rp.shutdown()


if __name__ == "__main__":
    main()


