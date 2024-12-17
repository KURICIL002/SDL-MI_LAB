# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sc_msg:msg/Commands.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Commands(type):
    """Metaclass of message 'Commands'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VACCUM_ON': 1,
        'SC_COAT': 2,
        'STOP': 3,
        'VACCUM_OFF': 4,
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
                'sc_msg.msg.Commands')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__commands
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__commands
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__commands
            cls._TYPE_SUPPORT = module.type_support_msg__msg__commands
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__commands

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VACCUM_ON': cls.__constants['VACCUM_ON'],
            'SC_COAT': cls.__constants['SC_COAT'],
            'STOP': cls.__constants['STOP'],
            'VACCUM_OFF': cls.__constants['VACCUM_OFF'],
        }

    @property
    def VACCUM_ON(self):
        """Message constant 'VACCUM_ON'."""
        return Metaclass_Commands.__constants['VACCUM_ON']

    @property
    def SC_COAT(self):
        """Message constant 'SC_COAT'."""
        return Metaclass_Commands.__constants['SC_COAT']

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_Commands.__constants['STOP']

    @property
    def VACCUM_OFF(self):
        """Message constant 'VACCUM_OFF'."""
        return Metaclass_Commands.__constants['VACCUM_OFF']


class Commands(metaclass=Metaclass_Commands):
    """
    Message class 'Commands'.

    Constants:
      VACCUM_ON
      SC_COAT
      STOP
      VACCUM_OFF
    """

    __slots__ = [
        '_sccmd',
        '_scrpm',
        '_sctime',
    ]

    _fields_and_field_types = {
        'sccmd': 'int32',
        'scrpm': 'int32',
        'sctime': 'int32',
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
        self.sccmd = kwargs.get('sccmd', int())
        self.scrpm = kwargs.get('scrpm', int())
        self.sctime = kwargs.get('sctime', int())

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
        if self.sccmd != other.sccmd:
            return False
        if self.scrpm != other.scrpm:
            return False
        if self.sctime != other.sctime:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sccmd(self):
        """Message field 'sccmd'."""
        return self._sccmd

    @sccmd.setter
    def sccmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sccmd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sccmd' field must be an integer in [-2147483648, 2147483647]"
        self._sccmd = value

    @builtins.property
    def scrpm(self):
        """Message field 'scrpm'."""
        return self._scrpm

    @scrpm.setter
    def scrpm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scrpm' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'scrpm' field must be an integer in [-2147483648, 2147483647]"
        self._scrpm = value

    @builtins.property
    def sctime(self):
        """Message field 'sctime'."""
        return self._sctime

    @sctime.setter
    def sctime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sctime' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sctime' field must be an integer in [-2147483648, 2147483647]"
        self._sctime = value
