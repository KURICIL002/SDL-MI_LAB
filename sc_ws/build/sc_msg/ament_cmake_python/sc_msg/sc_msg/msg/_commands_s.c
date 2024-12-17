// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sc_msg:msg/Commands.idl
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
#include "sc_msg/msg/detail/commands__struct.h"
#include "sc_msg/msg/detail/commands__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool sc_msg__msg__commands__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("sc_msg.msg._commands.Commands", full_classname_dest, 29) == 0);
  }
  sc_msg__msg__Commands * ros_message = _ros_message;
  {  // sccmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "sccmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sccmd = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // scrpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "scrpm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scrpm = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sctime
    PyObject * field = PyObject_GetAttrString(_pymsg, "sctime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sctime = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sc_msg__msg__commands__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Commands */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sc_msg.msg._commands");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Commands");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sc_msg__msg__Commands * ros_message = (sc_msg__msg__Commands *)raw_ros_message;
  {  // sccmd
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sccmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sccmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scrpm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->scrpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scrpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sctime
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sctime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sctime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
