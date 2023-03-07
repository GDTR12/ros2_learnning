// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from plumbing_interface_demo:msg/CustomMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
#define PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "plumbing_interface_demo/msg/detail/custom_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace plumbing_interface_demo
{

namespace msg
{

inline void to_flow_style_yaml(
  const CustomMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: data_int
  {
    out << "data_int: ";
    rosidl_generator_traits::value_to_yaml(msg.data_int, out);
    out << ", ";
  }

  // member: data_float
  {
    out << "data_float: ";
    rosidl_generator_traits::value_to_yaml(msg.data_float, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: data_int
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_int: ";
    rosidl_generator_traits::value_to_yaml(msg.data_int, out);
    out << "\n";
  }

  // member: data_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_float: ";
    rosidl_generator_traits::value_to_yaml(msg.data_float, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CustomMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace plumbing_interface_demo

namespace rosidl_generator_traits
{

[[deprecated("use plumbing_interface_demo::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const plumbing_interface_demo::msg::CustomMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  plumbing_interface_demo::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use plumbing_interface_demo::msg::to_yaml() instead")]]
inline std::string to_yaml(const plumbing_interface_demo::msg::CustomMsg & msg)
{
  return plumbing_interface_demo::msg::to_yaml(msg);
}

template<>
inline const char * data_type<plumbing_interface_demo::msg::CustomMsg>()
{
  return "plumbing_interface_demo::msg::CustomMsg";
}

template<>
inline const char * name<plumbing_interface_demo::msg::CustomMsg>()
{
  return "plumbing_interface_demo/msg/CustomMsg";
}

template<>
struct has_fixed_size<plumbing_interface_demo::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<plumbing_interface_demo::msg::CustomMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<plumbing_interface_demo::msg::CustomMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLUMBING_INTERFACE_DEMO__MSG__DETAIL__CUSTOM_MSG__TRAITS_HPP_
