// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from test1_msgs:srv/FindNorm.idl
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
#include "test1_msgs/srv/detail/find_norm__struct.h"
#include "test1_msgs/srv/detail/find_norm__functions.h"

bool test1_msgs__msg__test__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test1_msgs__msg__test__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test1_msgs__srv__find_norm__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("test1_msgs.srv._find_norm.FindNorm_Request", full_classname_dest, 42) == 0);
  }
  test1_msgs__srv__FindNorm_Request * ros_message = _ros_message;
  {  // input
    PyObject * field = PyObject_GetAttrString(_pymsg, "input");
    if (!field) {
      return false;
    }
    if (!test1_msgs__msg__test__convert_from_py(field, &ros_message->input)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test1_msgs__srv__find_norm__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FindNorm_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test1_msgs.srv._find_norm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FindNorm_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test1_msgs__srv__FindNorm_Request * ros_message = (test1_msgs__srv__FindNorm_Request *)raw_ros_message;
  {  // input
    PyObject * field = NULL;
    field = test1_msgs__msg__test__convert_to_py(&ros_message->input);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "input", field);
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
// #include "test1_msgs/srv/detail/find_norm__struct.h"
// already included above
// #include "test1_msgs/srv/detail/find_norm__functions.h"

bool test1_msgs__msg__test__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * test1_msgs__msg__test__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool test1_msgs__srv__find_norm__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("test1_msgs.srv._find_norm.FindNorm_Response", full_classname_dest, 43) == 0);
  }
  test1_msgs__srv__FindNorm_Response * ros_message = _ros_message;
  {  // norm
    PyObject * field = PyObject_GetAttrString(_pymsg, "norm");
    if (!field) {
      return false;
    }
    if (!test1_msgs__msg__test__convert_from_py(field, &ros_message->norm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * test1_msgs__srv__find_norm__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FindNorm_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("test1_msgs.srv._find_norm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FindNorm_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  test1_msgs__srv__FindNorm_Response * ros_message = (test1_msgs__srv__FindNorm_Response *)raw_ros_message;
  {  // norm
    PyObject * field = NULL;
    field = test1_msgs__msg__test__convert_to_py(&ros_message->norm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "norm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
