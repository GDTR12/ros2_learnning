// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plumbing_interface_demo:srv/ServiceMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__STRUCT_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Request __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Request __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceMsg_Request_
{
  using Type = ServiceMsg_Request_<ContainerAllocator>;

  explicit ServiceMsg_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = 0l;
      this->data2 = 0l;
    }
  }

  explicit ServiceMsg_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->data1 = 0l;
      this->data2 = 0l;
    }
  }

  // field types and members
  using _data1_type =
    int32_t;
  _data1_type data1;
  using _data2_type =
    int32_t;
  _data2_type data2;

  // setters for named parameter idiom
  Type & set__data1(
    const int32_t & _arg)
  {
    this->data1 = _arg;
    return *this;
  }
  Type & set__data2(
    const int32_t & _arg)
  {
    this->data2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Request
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Request
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceMsg_Request_ & other) const
  {
    if (this->data1 != other.data1) {
      return false;
    }
    if (this->data2 != other.data2) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceMsg_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceMsg_Request_

// alias to use template instance with default allocator
using ServiceMsg_Request =
  plumbing_interface_demo::srv::ServiceMsg_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plumbing_interface_demo


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Response __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Response __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceMsg_Response_
{
  using Type = ServiceMsg_Response_<ContainerAllocator>;

  explicit ServiceMsg_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  explicit ServiceMsg_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0l;
    }
  }

  // field types and members
  using _sum_type =
    int32_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int32_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Response
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceMsg_Response
    std::shared_ptr<plumbing_interface_demo::srv::ServiceMsg_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceMsg_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceMsg_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceMsg_Response_

// alias to use template instance with default allocator
using ServiceMsg_Response =
  plumbing_interface_demo::srv::ServiceMsg_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace plumbing_interface_demo
{

namespace srv
{

struct ServiceMsg
{
  using Request = plumbing_interface_demo::srv::ServiceMsg_Request;
  using Response = plumbing_interface_demo::srv::ServiceMsg_Response;
};

}  // namespace srv

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__STRUCT_HPP_
