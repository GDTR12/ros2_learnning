// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plumbing_interface_demo:srv/ServiceMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__TRAITS_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plumbing_interface_demo/srv/detail/service_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plumbing_interface_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceMsg_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: data1
  {
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << ", ";
  }

  // member: data2
  {
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceMsg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data1: ";
    rosidl_generator_traits::value_to_yaml(msg.data1, out);
    out << "\n";
  }

  // member: data2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data2: ";
    rosidl_generator_traits::value_to_yaml(msg.data2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceMsg_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace rosidl_generator_traits
{

[[deprecated("use plumbing_interface_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plumbing_interface_demo::srv::ServiceMsg_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plumbing_interface_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plumbing_interface_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const plumbing_interface_demo::srv::ServiceMsg_Request & msg)
{
  return plumbing_interface_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceMsg_Request>()
{
  return "plumbing_interface_demo::srv::ServiceMsg_Request";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceMsg_Request>()
{
  return "plumbing_interface_demo/srv/ServiceMsg_Request";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceMsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceMsg_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<plumbing_interface_demo::srv::ServiceMsg_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace plumbing_interface_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceMsg_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceMsg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceMsg_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace plumbing_interface_demo

namespace rosidl_generator_traits
{

[[deprecated("use plumbing_interface_demo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plumbing_interface_demo::srv::ServiceMsg_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plumbing_interface_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plumbing_interface_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const plumbing_interface_demo::srv::ServiceMsg_Response & msg)
{
  return plumbing_interface_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceMsg_Response>()
{
  return "plumbing_interface_demo::srv::ServiceMsg_Response";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceMsg_Response>()
{
  return "plumbing_interface_demo/srv/ServiceMsg_Response";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceMsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceMsg_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<plumbing_interface_demo::srv::ServiceMsg_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceMsg>()
{
  return "plumbing_interface_demo::srv::ServiceMsg";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceMsg>()
{
  return "plumbing_interface_demo/srv/ServiceMsg";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceMsg>
  : std::integral_constant<
    bool,
    has_fixed_size<plumbing_interface_demo::srv::ServiceMsg_Request>::value &&
    has_fixed_size<plumbing_interface_demo::srv::ServiceMsg_Response>::value
  >
{
};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceMsg>
  : std::integral_constant<
    bool,
    has_bounded_size<plumbing_interface_demo::srv::ServiceMsg_Request>::value &&
    has_bounded_size<plumbing_interface_demo::srv::ServiceMsg_Response>::value
  >
{
};

template<>
struct is_service<plumbing_interface_demo::srv::ServiceMsg>
  : std::true_type
{
};

template<>
struct is_service_request<plumbing_interface_demo::srv::ServiceMsg_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plumbing_interface_demo::srv::ServiceMsg_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_MSG__TRAITS_HPP_
