// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from model_sc_msg:msg/Modelsta.idl
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
#include "model_sc_msg/msg/detail/modelsta__struct.h"
#include "model_sc_msg/msg/detail/modelsta__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool model_sc_msg__msg__modelsta__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("model_sc_msg.msg._modelsta.Modelsta", full_classname_dest, 35) == 0);
  }
  model_sc_msg__msg__Modelsta * ros_message = _ros_message;
  {  // rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rpm = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_vacuum_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_vacuum_on");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_vacuum_on = (Py_True == field);
    Py_DECREF(field);
  }
  {  // apex_sc_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "apex_sc_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apex_sc_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * model_sc_msg__msg__modelsta__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Modelsta */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("model_sc_msg.msg._modelsta");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Modelsta");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  model_sc_msg__msg__Modelsta * ros_message = (model_sc_msg__msg__Modelsta *)raw_ros_message;
  {  // rpm
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_vacuum_on
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_vacuum_on ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_vacuum_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apex_sc_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->apex_sc_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apex_sc_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
