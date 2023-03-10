## 3.5 话题重名

#### 问题描述

节点名称可能出现重名的情况，同理话题名称也可能重名，不过与节点重名不同的是，有些场景下需要避免话题重名的情况，但有些场景下又需要将不同的不同的话题名称修改为相同。

> 在 ROS2 不同的节点之间通信都依赖于话题，话题名称也可能出现重名的情况，话题重名时，系统虽然不会抛出异常，但是通过相同话题名称关联到一起的节点可能并不属于同一通信逻辑，从而导致通信错乱，甚至出现异常。这种情况下可能就需要将相同的话题名称设置为不同。
>
> 又或者，两个节点是属于同一通信逻辑的，但是节点之间话题名称不同，导致通信失败。这种情况下就需要将两个节点的话题名称由不同修改为相同。

那么如何修改话题名称呢？

#### 解决思路

与节点重名的解决思路类似的，为了避免话题重名问题，一般有两种策略：

1. **名称重映射**，也即为话题名称起别名；
2. **命名空间**，是为话题名称添加前缀，可以有多级，格式：/xxx/yyy/zzz。

需要注意的是，通过命名空间设置话题名称时，需要保证话题是非全局话题。

#### 解决方案

与节点重名解决方案类似的，修改话题名称的方式主要有如下三种：

1. ros2 run 命令实现；
2. launch 文件实现；
3. 编码实现。

本节将逐一演示上述三种方案的实现语法。

