// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Request __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Request __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceExercise_Request_
{
  using Type = ServiceExercise_Request_<ContainerAllocator>;

  explicit ServiceExercise_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  explicit ServiceExercise_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->theta = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _theta_type =
    float;
  _theta_type theta;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Request
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Request
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceExercise_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceExercise_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceExercise_Request_

// alias to use template instance with default allocator
using ServiceExercise_Request =
  plumbing_interface_demo::srv::ServiceExercise_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plumbing_interface_demo


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Response __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Response __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServiceExercise_Response_
{
  using Type = ServiceExercise_Response_<ContainerAllocator>;

  explicit ServiceExercise_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit ServiceExercise_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Response
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__srv__ServiceExercise_Response
    std::shared_ptr<plumbing_interface_demo::srv::ServiceExercise_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceExercise_Response_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceExercise_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceExercise_Response_

// alias to use template instance with default allocator
using ServiceExercise_Response =
  plumbing_interface_demo::srv::ServiceExercise_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace plumbing_interface_demo
{

namespace srv
{

struct ServiceExercise
{
  using Request = plumbing_interface_demo::srv::ServiceExercise_Request;
  using Response = plumbing_interface_demo::srv::ServiceExercise_Response;
};

}  // namespace srv

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__STRUCT_HPP_
