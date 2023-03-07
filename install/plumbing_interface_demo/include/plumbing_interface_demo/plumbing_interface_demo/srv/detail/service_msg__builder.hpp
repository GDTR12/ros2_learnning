// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plumbing_interface_demo:srv/ServiceMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__BUILDER_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plumbing_interface_demo/srv/detail/service_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plumbing_interface_demo
{

namespace srv
{

namespace builder
{

class Init_ServiceMsg_Request_data2
{
public:
  explicit Init_ServiceMsg_Request_data2(::plumbing_interface_demo::srv::ServiceMsg_Request & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::srv::ServiceMsg_Request data2(::plumbing_interface_demo::srv::ServiceMsg_Request::_data2_type arg)
  {
    msg_.data2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceMsg_Request msg_;
};

class Init_ServiceMsg_Request_data1
{
public:
  Init_ServiceMsg_Request_data1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceMsg_Request_data2 data1(::plumbing_interface_demo::srv::ServiceMsg_Request::_data1_type arg)
  {
    msg_.data1 = std::move(arg);
    return Init_ServiceMsg_Request_data2(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceMsg_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::srv::ServiceMsg_Request>()
{
  return plumbing_interface_demo::srv::builder::Init_ServiceMsg_Request_data1();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace srv
{

namespace builder
{

class Init_ServiceMsg_Response_sum
{
public:
  Init_ServiceMsg_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::srv::ServiceMsg_Response sum(::plumbing_interface_demo::srv::ServiceMsg_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceMsg_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::srv::ServiceMsg_Response>()
{
  return plumbing_interface_demo::srv::builder::Init_ServiceMsg_Response_sum();
}

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__BUILDER_HPP_
