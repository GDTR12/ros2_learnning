// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plumbing_interface_demo:srv/ServiceExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__TRAITS_HPP_
#define PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plumbing_interface_demo/srv/detail/service_exercise__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plumbing_interface_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceExercise_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceExercise_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceExercise_Request & msg, bool use_flow_style = false)
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
  const plumbing_interface_demo::srv::ServiceExercise_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  plumbing_interface_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plumbing_interface_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const plumbing_interface_demo::srv::ServiceExercise_Request & msg)
{
  return plumbing_interface_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceExercise_Request>()
{
  return "plumbing_interface_demo::srv::ServiceExercise_Request";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceExercise_Request>()
{
  return "plumbing_interface_demo/srv/ServiceExercise_Request";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceExercise_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceExercise_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<plumbing_interface_demo::srv::ServiceExercise_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace plumbing_interface_demo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServiceExercise_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServiceExercise_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServiceExercise_Response & msg, bool use_flow_style = false)
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
  const plumbing_interface_demo::srv::ServiceExercise_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  plumbing_interface_demo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plumbing_interface_demo::srv::to_yaml() instead")]]
inline std::string to_yaml(const plumbing_interface_demo::srv::ServiceExercise_Response & msg)
{
  return plumbing_interface_demo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceExercise_Response>()
{
  return "plumbing_interface_demo::srv::ServiceExercise_Response";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceExercise_Response>()
{
  return "plumbing_interface_demo/srv/ServiceExercise_Response";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceExercise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceExercise_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<plumbing_interface_demo::srv::ServiceExercise_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<plumbing_interface_demo::srv::ServiceExercise>()
{
  return "plumbing_interface_demo::srv::ServiceExercise";
}

template<>
inline const char * name<plumbing_interface_demo::srv::ServiceExercise>()
{
  return "plumbing_interface_demo/srv/ServiceExercise";
}

template<>
struct has_fixed_size<plumbing_interface_demo::srv::ServiceExercise>
  : std::integral_constant<
    bool,
    has_fixed_size<plumbing_interface_demo::srv::ServiceExercise_Request>::value &&
    has_fixed_size<plumbing_interface_demo::srv::ServiceExercise_Response>::value
  >
{
};

template<>
struct has_bounded_size<plumbing_interface_demo::srv::ServiceExercise>
  : std::integral_constant<
    bool,
    has_bounded_size<plumbing_interface_demo::srv::ServiceExercise_Request>::value &&
    has_bounded_size<plumbing_interface_demo::srv::ServiceExercise_Response>::value
  >
{
};

template<>
struct is_service<plumbing_interface_demo::srv::ServiceExercise>
  : std::true_type
{
};

template<>
struct is_service_request<plumbing_interface_demo::srv::ServiceExercise_Request>
  : std::true_type
{
};

template<>
struct is_service_response<plumbing_interface_demo::srv::ServiceExercise_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PLUMBING_INTERFACE_DEMO__SRV__DETAIL__SERVICE_EXERCISE__TRAITS_HPP_
