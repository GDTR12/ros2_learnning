// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define PLUMBING_INTERFACE_DEMO__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_plumbing_interface_demo __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_plumbing_interface_demo __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_plumbing_interface_demo __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_plumbing_interface_demo __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_plumbing_interface_demo
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plumbing_interface_demo ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_plumbing_interface_demo
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plumbing_interface_demo ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_plumbing_interface_demo
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_plumbing_interface_demo __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_plumbing_interface_demo
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plumbing_interface_demo __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_plumbing_interface_demo
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // PLUMBING_INTERFACE_DEMO__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
