# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/SetLEDPanelStateCustom.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLEDPanelStateCustom_Request(type):
    """Metaclass of message 'SetLEDPanelStateCustom_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.SetLEDPanelStateCustom_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led_panel_state_custom__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led_panel_state_custom__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led_panel_state_custom__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led_panel_state_custom__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led_panel_state_custom__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLEDPanelStateCustom_Request(metaclass=Metaclass_SetLEDPanelStateCustom_Request):
    """Message class 'SetLEDPanelStateCustom_Request'."""

    __slots__ = [
        '_led_number',
        '_state',
    ]

    _fields_and_field_types = {
        'led_number': 'int64',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.led_number = kwargs.get('led_number', int())
        self.state = kwargs.get('state', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.led_number != other.led_number:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def led_number(self):
        """Message field 'led_number'."""
        return self._led_number

    @led_number.setter
    def led_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'led_number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._led_number = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state' field must be of type 'bool'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLEDPanelStateCustom_Response(type):
    """Metaclass of message 'SetLEDPanelStateCustom_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.SetLEDPanelStateCustom_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_led_panel_state_custom__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_led_panel_state_custom__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_led_panel_state_custom__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_led_panel_state_custom__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_led_panel_state_custom__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLEDPanelStateCustom_Response(metaclass=Metaclass_SetLEDPanelStateCustom_Response):
    """Message class 'SetLEDPanelStateCustom_Response'."""

    __slots__ = [
        '_actual_states',
    ]

    _fields_and_field_types = {
        'actual_states': 'boolean[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.actual_states = kwargs.get(
            'actual_states',
            [bool() for x in range(3)]
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.actual_states != other.actual_states:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actual_states(self):
        """Message field 'actual_states'."""
        return self._actual_states

    @actual_states.setter
    def actual_states(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'actual_states' field must be a set or sequence with length 3 and each value of type 'bool'"
        self._actual_states = value


class Metaclass_SetLEDPanelStateCustom(type):
    """Metaclass of service 'SetLEDPanelStateCustom'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.SetLEDPanelStateCustom')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_led_panel_state_custom

            from my_robot_interfaces.srv import _set_led_panel_state_custom
            if _set_led_panel_state_custom.Metaclass_SetLEDPanelStateCustom_Request._TYPE_SUPPORT is None:
                _set_led_panel_state_custom.Metaclass_SetLEDPanelStateCustom_Request.__import_type_support__()
            if _set_led_panel_state_custom.Metaclass_SetLEDPanelStateCustom_Response._TYPE_SUPPORT is None:
                _set_led_panel_state_custom.Metaclass_SetLEDPanelStateCustom_Response.__import_type_support__()


class SetLEDPanelStateCustom(metaclass=Metaclass_SetLEDPanelStateCustom):
    from my_robot_interfaces.srv._set_led_panel_state_custom import SetLEDPanelStateCustom_Request as Request
    from my_robot_interfaces.srv._set_led_panel_state_custom import SetLEDPanelStateCustom_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
