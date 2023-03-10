# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plumbing_interface_demo:srv/ServiceMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServiceMsg_Request(type):
    """Metaclass of message 'ServiceMsg_Request'."""

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
            module = import_type_support('plumbing_interface_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plumbing_interface_demo.srv.ServiceMsg_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service_msg__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service_msg__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service_msg__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service_msg__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service_msg__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServiceMsg_Request(metaclass=Metaclass_ServiceMsg_Request):
    """Message class 'ServiceMsg_Request'."""

    __slots__ = [
        '_data1',
        '_data2',
    ]

    _fields_and_field_types = {
        'data1': 'int32',
        'data2': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data1 = kwargs.get('data1', int())
        self.data2 = kwargs.get('data2', int())

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
        if self.data1 != other.data1:
            return False
        if self.data2 != other.data2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def data1(self):
        """Message field 'data1'."""
        return self._data1

    @data1.setter
    def data1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data1' field must be an integer in [-2147483648, 2147483647]"
        self._data1 = value

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'data2' field must be an integer in [-2147483648, 2147483647]"
        self._data2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ServiceMsg_Response(type):
    """Metaclass of message 'ServiceMsg_Response'."""

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
            module = import_type_support('plumbing_interface_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plumbing_interface_demo.srv.ServiceMsg_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__service_msg__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__service_msg__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__service_msg__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__service_msg__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__service_msg__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServiceMsg_Response(metaclass=Metaclass_ServiceMsg_Response):
    """Message class 'ServiceMsg_Response'."""

    __slots__ = [
        '_sum',
    ]

    _fields_and_field_types = {
        'sum': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = kwargs.get('sum', int())

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
        if self.sum != other.sum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def sum(self):  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sum' field must be an integer in [-2147483648, 2147483647]"
        self._sum = value


class Metaclass_ServiceMsg(type):
    """Metaclass of service 'ServiceMsg'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('plumbing_interface_demo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'plumbing_interface_demo.srv.ServiceMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__service_msg

            from plumbing_interface_demo.srv import _service_msg
            if _service_msg.Metaclass_ServiceMsg_Request._TYPE_SUPPORT is None:
                _service_msg.Metaclass_ServiceMsg_Request.__import_type_support__()
            if _service_msg.Metaclass_ServiceMsg_Response._TYPE_SUPPORT is None:
                _service_msg.Metaclass_ServiceMsg_Response.__import_type_support__()


class ServiceMsg(metaclass=Metaclass_ServiceMsg):
    from plumbing_interface_demo.srv._service_msg import ServiceMsg_Request as Request
    from plumbing_interface_demo.srv._service_msg import ServiceMsg_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
