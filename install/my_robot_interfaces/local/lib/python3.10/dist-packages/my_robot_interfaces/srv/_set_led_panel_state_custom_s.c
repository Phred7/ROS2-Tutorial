// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
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
#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__struct.h"
#include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__set_led_panel_state_custom__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[83];
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
    assert(strncmp("my_robot_interfaces.srv._set_led_panel_state_custom.SetLEDPanelStateCustom_Request", full_classname_dest, 82) == 0);
  }
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Request * ros_message = _ros_message;
  {  // led_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_number = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // state
    PyObject * field = PyObject_GetAttrString(_pymsg, "state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->state = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__set_led_panel_state_custom__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLEDPanelStateCustom_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._set_led_panel_state_custom");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLEDPanelStateCustom_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Request * ros_message = (my_robot_interfaces__srv__SetLEDPanelStateCustom_Request *)raw_ros_message;
  {  // led_number
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->led_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "state", field);
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
// #include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__struct.h"
// already included above
// #include "my_robot_interfaces/srv/detail/set_led_panel_state_custom__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_robot_interfaces__srv__set_led_panel_state_custom__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[84];
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
    assert(strncmp("my_robot_interfaces.srv._set_led_panel_state_custom.SetLEDPanelStateCustom_Response", full_classname_dest, 83) == 0);
  }
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Response * ros_message = _ros_message;
  {  // actual_states
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_states");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'actual_states'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 3;
      bool * dest = ros_message->actual_states;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_robot_interfaces__srv__set_led_panel_state_custom__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLEDPanelStateCustom_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_robot_interfaces.srv._set_led_panel_state_custom");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLEDPanelStateCustom_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_robot_interfaces__srv__SetLEDPanelStateCustom_Response * ros_message = (my_robot_interfaces__srv__SetLEDPanelStateCustom_Response *)raw_ros_message;
  {  // actual_states
    PyObject * field = NULL;
    size_t size = 3;
    bool * src = ros_message->actual_states;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_states", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
