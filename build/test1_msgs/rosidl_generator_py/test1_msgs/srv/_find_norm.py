# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test1_msgs:srv/FindNorm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FindNorm_Request(type):
    """Metaclass of message 'FindNorm_Request'."""

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
            module = import_type_support('test1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test1_msgs.srv.FindNorm_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__find_norm__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__find_norm__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__find_norm__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__find_norm__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__find_norm__request

            from test1_msgs.msg import Test
            if Test.__class__._TYPE_SUPPORT is None:
                Test.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindNorm_Request(metaclass=Metaclass_FindNorm_Request):
    """Message class 'FindNorm_Request'."""

    __slots__ = [
        '_input',
    ]

    _fields_and_field_types = {
        'input': 'test1_msgs/Test',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test1_msgs', 'msg'], 'Test'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test1_msgs.msg import Test
        self.input = kwargs.get('input', Test())

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
        if self.input != other.input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if __debug__:
            from test1_msgs.msg import Test
            assert \
                isinstance(value, Test), \
                "The 'input' field must be a sub message of type 'Test'"
        self._input = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FindNorm_Response(type):
    """Metaclass of message 'FindNorm_Response'."""

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
            module = import_type_support('test1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test1_msgs.srv.FindNorm_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__find_norm__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__find_norm__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__find_norm__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__find_norm__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__find_norm__response

            from test1_msgs.msg import Test
            if Test.__class__._TYPE_SUPPORT is None:
                Test.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FindNorm_Response(metaclass=Metaclass_FindNorm_Response):
    """Message class 'FindNorm_Response'."""

    __slots__ = [
        '_norm',
    ]

    _fields_and_field_types = {
        'norm': 'test1_msgs/Test',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test1_msgs', 'msg'], 'Test'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test1_msgs.msg import Test
        self.norm = kwargs.get('norm', Test())

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
        if self.norm != other.norm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def norm(self):
        """Message field 'norm'."""
        return self._norm

    @norm.setter
    def norm(self, value):
        if __debug__:
            from test1_msgs.msg import Test
            assert \
                isinstance(value, Test), \
                "The 'norm' field must be a sub message of type 'Test'"
        self._norm = value


class Metaclass_FindNorm(type):
    """Metaclass of service 'FindNorm'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('test1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test1_msgs.srv.FindNorm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__find_norm

            from test1_msgs.srv import _find_norm
            if _find_norm.Metaclass_FindNorm_Request._TYPE_SUPPORT is None:
                _find_norm.Metaclass_FindNorm_Request.__import_type_support__()
            if _find_norm.Metaclass_FindNorm_Response._TYPE_SUPPORT is None:
                _find_norm.Metaclass_FindNorm_Response.__import_type_support__()


class FindNorm(metaclass=Metaclass_FindNorm):
    from test1_msgs.srv._find_norm import FindNorm_Request as Request
    from test1_msgs.srv._find_norm import FindNorm_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
