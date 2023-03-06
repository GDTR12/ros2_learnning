import rclpy as rp
from rclpy.node import Node
from std_msgs.msg import String

class Talker(Node):
    def __init__(self):
        super().__init__("Talker_py")
        self.count = 0
        self.get_logger().info("Create taker")
        self.publisher = self.create_publisher(String, "Chatter", 10)
        self.timer = self.create_timer(1.0,self.on_timer_cb)

    def on_timer_cb(self):
        msg = String()
        msg.data = "Msg data " + str(self.count)
        self.count += 1
        self.publisher.publish(msg)
        self.get_logger().info("Send:%s" %msg.data)

def main():
    print('Hi from topic_demo_py.')
    rp.init()
    rp.spin(Talker())
    rp.shutdown()



if __name__ == '__main__':
    main()
