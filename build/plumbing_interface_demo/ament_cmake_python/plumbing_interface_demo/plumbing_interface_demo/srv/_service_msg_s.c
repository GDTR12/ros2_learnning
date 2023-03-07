// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from plumbing_interface_demo:srv/ServiceMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "plumbing_interface_demo/srv/detail/service_msg__struct.h"
#include "plumbing_interface_demo/srv/detail/service_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool plumbing_interface_demo__srv__service_msg__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("plumbing_interface_demo.srv._service_msg.ServiceMsg_Request", full_classname_dest, 59) == 0);
  }
  plumbing_interface_demo__srv__ServiceMsg_Request * ros_message = _ros_message;
  {  // data1
    PyObject * field = PyObject_GetAttrString(_pymsg, "data1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // data2
    PyObject * field = PyObject_GetAttrString(_pymsg, "data2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plumbing_interface_demo__srv__service_msg__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ServiceMsg_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plumbing_interface_demo.srv._service_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ServiceMsg_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plumbing_interface_demo__srv__ServiceMsg_Request * ros_message = (plumbing_interface_demo__srv__ServiceMsg_Request *)raw_ros_message;
  {  // data1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->data2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_msg__struct.h"
// already included above
// #include "plumbing_interface_demo/srv/detail/service_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool plumbing_interface_demo__srv__service_msg__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("plumbing_interface_demo.srv._service_msg.ServiceMsg_Response", full_classname_dest, 60) == 0);
  }
  plumbing_interface_demo__srv__ServiceMsg_Response * ros_message = _ros_message;
  {  // sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * plumbing_interface_demo__srv__service_msg__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ServiceMsg_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("plumbing_interface_demo.srv._service_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ServiceMsg_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  plumbing_interface_demo__srv__ServiceMsg_Response * ros_message = (plumbing_interface_demo__srv__ServiceMsg_Response *)raw_ros_message;
  {  // sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
