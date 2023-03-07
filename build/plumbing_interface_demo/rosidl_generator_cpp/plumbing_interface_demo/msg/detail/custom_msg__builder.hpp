// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plumbing_interface_demo:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
#define PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plumbing_interface_demo/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plumbing_interface_demo
{

namespace msg
{

namespace builder
{

class Init_CustomMsg_data_float
{
public:
  explicit Init_CustomMsg_data_float(::plumbing_interface_demo::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::msg::CustomMsg data_float(::plumbing_interface_demo::msg::CustomMsg::_data_float_type arg)
  {
    msg_.data_float = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::msg::CustomMsg msg_;
};

class Init_CustomMsg_data_int
{
public:
  explicit Init_CustomMsg_data_int(::plumbing_interface_demo::msg::CustomMsg & msg)
  : msg_(msg)
  {}
  Init_CustomMsg_data_float data_int(::plumbing_interface_demo::msg::CustomMsg::_data_int_type arg)
  {
    msg_.data_int = std::move(arg);
    return Init_CustomMsg_data_float(msg_);
  }

private:
  ::plumbing_interface_demo::msg::CustomMsg msg_;
};

class Init_CustomMsg_name
{
public:
  Init_CustomMsg_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMsg_data_int name(::plumbing_interface_demo::msg::CustomMsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CustomMsg_data_int(msg_);
  }

private:
  ::plumbing_interface_demo::msg::CustomMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::msg::CustomMsg>()
{
  return plumbing_interface_demo::msg::builder::Init_CustomMsg_name();
}

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__BUILDER_HPP_
