## 3.9 本章小结

本章主要介绍了通信机制相关的一些补充内容，相关知识点如下：

* 分布式环境搭建；
* 各种重名问题（包重名、节点重名、话题重名）；
* 元功能包；
* 时间相关API；
* 通信机制常用工具；

ROS2中的分布式环境搭建极其便捷，只需要保证不同的ROS2设备在同一网络下，默认不同设备之间即可正常通信；关于重名问题，不同工作空间下功能包重名应该是尽力避免重名的，节点重名与话题重名的问题则可以通过两种策略、三种途径解决；元功能包是一个特殊的功能包，相当于是一个包目录索引，可以将具有内在关联的功能包关联到一起；时间相关的API则介绍了在ROS2中一些常用的定时器、频率控制和持续时间相关的一些API，这些API都是经常使用的；通信机制工具主要介绍了通信相关的命令行工具以及图形化的rqt工具箱，通过这些工具可以提高开发者的开发、调试效率。

