# generated from rosidl_generator_py/resource/_idl.py.em
# with input from model_sc_msg:msg/Modelcomm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Modelcomm(type):
    """Metaclass of message 'Modelcomm'."""

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
            module = import_type_support('model_sc_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'model_sc_msg.msg.Modelcomm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__modelcomm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__modelcomm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__modelcomm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__modelcomm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__modelcomm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Modelcomm(metaclass=Metaclass_Modelcomm):
    """Message class 'Modelcomm'."""

    __slots__ = [
        '_apex_sc_command',
        '_apex_sc_rpm',
        '_apex_sc_duration',
    ]

    _fields_and_field_types = {
        'apex_sc_command': 'int32',
        'apex_sc_rpm': 'int32',
        'apex_sc_duration': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.apex_sc_command = kwargs.get('apex_sc_command', int())
        self.apex_sc_rpm = kwargs.get('apex_sc_rpm', int())
        self.apex_sc_duration = kwargs.get('apex_sc_duration', int())

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
        if self.apex_sc_command != other.apex_sc_command:
            return False
        if self.apex_sc_rpm != other.apex_sc_rpm:
            return False
        if self.apex_sc_duration != other.apex_sc_duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def apex_sc_command(self):
        """Message field 'apex_sc_command'."""
        return self._apex_sc_command

    @apex_sc_command.setter
    def apex_sc_command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apex_sc_command' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'apex_sc_command' field must be an integer in [-2147483648, 2147483647]"
        self._apex_sc_command = value

    @builtins.property
    def apex_sc_rpm(self):
        """Message field 'apex_sc_rpm'."""
        return self._apex_sc_rpm

    @apex_sc_rpm.setter
    def apex_sc_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apex_sc_rpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'apex_sc_rpm' field must be an integer in [-2147483648, 2147483647]"
        self._apex_sc_rpm = value

    @builtins.property
    def apex_sc_duration(self):
        """Message field 'apex_sc_duration'."""
        return self._apex_sc_duration

    @apex_sc_duration.setter
    def apex_sc_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apex_sc_duration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'apex_sc_duration' field must be an integer in [-2147483648, 2147483647]"
        self._apex_sc_duration = value
