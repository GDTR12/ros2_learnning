// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plumbing_interface_demo:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
#define PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__msg__CustomMsg __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__msg__CustomMsg __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomMsg_
{
  using Type = CustomMsg_<ContainerAllocator>;

  explicit CustomMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->data_int = 0l;
      this->data_float = 0.0;
    }
  }

  explicit CustomMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->data_int = 0l;
      this->data_float = 0.0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _data_int_type =
    int32_t;
  _data_int_type data_int;
  using _data_float_type =
    double;
  _data_float_type data_float;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__data_int(
    const int32_t & _arg)
  {
    this->data_int = _arg;
    return *this;
  }
  Type & set__data_float(
    const double & _arg)
  {
    this->data_float = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__msg__CustomMsg
    std::shared_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__msg__CustomMsg
    std::shared_ptr<plumbing_interface_demo::msg::CustomMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomMsg_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->data_int != other.data_int) {
      return false;
    }
    if (this->data_float != other.data_float) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomMsg_

// alias to use template instance with default allocator
using CustomMsg =
  plumbing_interface_demo::msg::CustomMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__STRUCT_HPP_
