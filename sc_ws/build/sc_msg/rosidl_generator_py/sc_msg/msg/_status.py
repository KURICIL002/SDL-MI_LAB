# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sc_msg:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
            module = import_type_support('sc_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sc_msg.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_rpm',
        '_isvacon',
        '_scstatus',
    ]

    _fields_and_field_types = {
        'rpm': 'int32',
        'isvacon': 'boolean',
        'scstatus': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rpm = kwargs.get('rpm', int())
        self.isvacon = kwargs.get('isvacon', bool())
        self.scstatus = kwargs.get('scstatus', int())

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
        if self.rpm != other.rpm:
            return False
        if self.isvacon != other.isvacon:
            return False
        if self.scstatus != other.scstatus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rpm(self):
        """Message field 'rpm'."""
        return self._rpm

    @rpm.setter
    def rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rpm' field must be an integer in [-2147483648, 2147483647]"
        self._rpm = value

    @builtins.property
    def isvacon(self):
        """Message field 'isvacon'."""
        return self._isvacon

    @isvacon.setter
    def isvacon(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'isvacon' field must be of type 'bool'"
        self._isvacon = value

    @builtins.property
    def scstatus(self):
        """Message field 'scstatus'."""
        return self._scstatus

    @scstatus.setter
    def scstatus(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scstatus' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scstatus' field must be an integer in [-2147483648, 2147483647]"
        self._scstatus = value