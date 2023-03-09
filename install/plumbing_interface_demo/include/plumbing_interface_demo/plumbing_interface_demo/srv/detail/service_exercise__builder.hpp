// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__BUILDER_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plumbing_interface_demo/srv/detail/service_exercise__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plumbing_interface_demo
{

namespace srv
{

namespace builder
{

class Init_ServiceExercise_Request_theta
{
public:
  explicit Init_ServiceExercise_Request_theta(::plumbing_interface_demo::srv::ServiceExercise_Request & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::srv::ServiceExercise_Request theta(::plumbing_interface_demo::srv::ServiceExercise_Request::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceExercise_Request msg_;
};

class Init_ServiceExercise_Request_y
{
public:
  explicit Init_ServiceExercise_Request_y(::plumbing_interface_demo::srv::ServiceExercise_Request & msg)
  : msg_(msg)
  {}
  Init_ServiceExercise_Request_theta y(::plumbing_interface_demo::srv::ServiceExercise_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ServiceExercise_Request_theta(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceExercise_Request msg_;
};

class Init_ServiceExercise_Request_x
{
public:
  Init_ServiceExercise_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceExercise_Request_y x(::plumbing_interface_demo::srv::ServiceExercise_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ServiceExercise_Request_y(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceExercise_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::srv::ServiceExercise_Request>()
{
  return plumbing_interface_demo::srv::builder::Init_ServiceExercise_Request_x();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace srv
{

namespace builder
{

class Init_ServiceExercise_Response_distance
{
public:
  Init_ServiceExercise_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::srv::ServiceExercise_Response distance(::plumbing_interface_demo::srv::ServiceExercise_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::srv::ServiceExercise_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::srv::ServiceExercise_Response>()
{
  return plumbing_interface_demo::srv::builder::Init_ServiceExercise_Response_distance();
}

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__BUILDER_HPP_
