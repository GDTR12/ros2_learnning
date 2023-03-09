# generated from rosidl_generator_py/resource/_idl.py.em
# with input from plumbing_interface_demo:action/ActionExercise.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionExercise_Goal(type):
    """Metaclass of message 'ActionExercise_Goal'."""

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
                'plumbing_interface_demo.action.ActionExercise_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_Goal(metaclass=Metaclass_ActionExercise_Goal):
    """Message class 'ActionExercise_Goal'."""

    __slots__ = [
        '_goal_x',
        '_goal_y',
        '_goal_theta',
    ]

    _fields_and_field_types = {
        'goal_x': 'float',
        'goal_y': 'float',
        'goal_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_x = kwargs.get('goal_x', float())
        self.goal_y = kwargs.get('goal_y', float())
        self.goal_theta = kwargs.get('goal_theta', float())

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
        if self.goal_x != other.goal_x:
            return False
        if self.goal_y != other.goal_y:
            return False
        if self.goal_theta != other.goal_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_x(self):
        """Message field 'goal_x'."""
        return self._goal_x

    @goal_x.setter
    def goal_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_x = value

    @builtins.property
    def goal_y(self):
        """Message field 'goal_y'."""
        return self._goal_y

    @goal_y.setter
    def goal_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_y = value

    @builtins.property
    def goal_theta(self):
        """Message field 'goal_theta'."""
        return self._goal_theta

    @goal_theta.setter
    def goal_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_theta = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_Result(type):
    """Metaclass of message 'ActionExercise_Result'."""

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
                'plumbing_interface_demo.action.ActionExercise_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_Result(metaclass=Metaclass_ActionExercise_Result):
    """Message class 'ActionExercise_Result'."""

    __slots__ = [
        '_finally_x',
        '_finally_y',
        '_finally_theta',
    ]

    _fields_and_field_types = {
        'finally_x': 'float',
        'finally_y': 'float',
        'finally_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.finally_x = kwargs.get('finally_x', float())
        self.finally_y = kwargs.get('finally_y', float())
        self.finally_theta = kwargs.get('finally_theta', float())

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
        if self.finally_x != other.finally_x:
            return False
        if self.finally_y != other.finally_y:
            return False
        if self.finally_theta != other.finally_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def finally_x(self):
        """Message field 'finally_x'."""
        return self._finally_x

    @finally_x.setter
    def finally_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finally_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finally_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finally_x = value

    @builtins.property
    def finally_y(self):
        """Message field 'finally_y'."""
        return self._finally_y

    @finally_y.setter
    def finally_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finally_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finally_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finally_y = value

    @builtins.property
    def finally_theta(self):
        """Message field 'finally_theta'."""
        return self._finally_theta

    @finally_theta.setter
    def finally_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'finally_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'finally_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._finally_theta = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_Feedback(type):
    """Metaclass of message 'ActionExercise_Feedback'."""

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
                'plumbing_interface_demo.action.ActionExercise_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_Feedback(metaclass=Metaclass_ActionExercise_Feedback):
    """Message class 'ActionExercise_Feedback'."""

    __slots__ = [
        '_distance',
    ]

    _fields_and_field_types = {
        'distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance = kwargs.get('distance', float())

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
        if self.distance != other.distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_SendGoal_Request(type):
    """Metaclass of message 'ActionExercise_SendGoal_Request'."""

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
                'plumbing_interface_demo.action.ActionExercise_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__send_goal__request

            from plumbing_interface_demo.action import ActionExercise
            if ActionExercise.Goal.__class__._TYPE_SUPPORT is None:
                ActionExercise.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_SendGoal_Request(metaclass=Metaclass_ActionExercise_SendGoal_Request):
    """Message class 'ActionExercise_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'plumbing_interface_demo/ActionExercise_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plumbing_interface_demo', 'action'], 'ActionExercise_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from plumbing_interface_demo.action._action_exercise import ActionExercise_Goal
        self.goal = kwargs.get('goal', ActionExercise_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from plumbing_interface_demo.action._action_exercise import ActionExercise_Goal
            assert \
                isinstance(value, ActionExercise_Goal), \
                "The 'goal' field must be a sub message of type 'ActionExercise_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_SendGoal_Response(type):
    """Metaclass of message 'ActionExercise_SendGoal_Response'."""

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
                'plumbing_interface_demo.action.ActionExercise_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_SendGoal_Response(metaclass=Metaclass_ActionExercise_SendGoal_Response):
    """Message class 'ActionExercise_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ActionExercise_SendGoal(type):
    """Metaclass of service 'ActionExercise_SendGoal'."""

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
                'plumbing_interface_demo.action.ActionExercise_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__action_exercise__send_goal

            from plumbing_interface_demo.action import _action_exercise
            if _action_exercise.Metaclass_ActionExercise_SendGoal_Request._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_SendGoal_Request.__import_type_support__()
            if _action_exercise.Metaclass_ActionExercise_SendGoal_Response._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_SendGoal_Response.__import_type_support__()


class ActionExercise_SendGoal(metaclass=Metaclass_ActionExercise_SendGoal):
    from plumbing_interface_demo.action._action_exercise import ActionExercise_SendGoal_Request as Request
    from plumbing_interface_demo.action._action_exercise import ActionExercise_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_GetResult_Request(type):
    """Metaclass of message 'ActionExercise_GetResult_Request'."""

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
                'plumbing_interface_demo.action.ActionExercise_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_GetResult_Request(metaclass=Metaclass_ActionExercise_GetResult_Request):
    """Message class 'ActionExercise_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_GetResult_Response(type):
    """Metaclass of message 'ActionExercise_GetResult_Response'."""

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
                'plumbing_interface_demo.action.ActionExercise_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__get_result__response

            from plumbing_interface_demo.action import ActionExercise
            if ActionExercise.Result.__class__._TYPE_SUPPORT is None:
                ActionExercise.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_GetResult_Response(metaclass=Metaclass_ActionExercise_GetResult_Response):
    """Message class 'ActionExercise_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'plumbing_interface_demo/ActionExercise_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plumbing_interface_demo', 'action'], 'ActionExercise_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from plumbing_interface_demo.action._action_exercise import ActionExercise_Result
        self.result = kwargs.get('result', ActionExercise_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from plumbing_interface_demo.action._action_exercise import ActionExercise_Result
            assert \
                isinstance(value, ActionExercise_Result), \
                "The 'result' field must be a sub message of type 'ActionExercise_Result'"
        self._result = value


class Metaclass_ActionExercise_GetResult(type):
    """Metaclass of service 'ActionExercise_GetResult'."""

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
                'plumbing_interface_demo.action.ActionExercise_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__action_exercise__get_result

            from plumbing_interface_demo.action import _action_exercise
            if _action_exercise.Metaclass_ActionExercise_GetResult_Request._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_GetResult_Request.__import_type_support__()
            if _action_exercise.Metaclass_ActionExercise_GetResult_Response._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_GetResult_Response.__import_type_support__()


class ActionExercise_GetResult(metaclass=Metaclass_ActionExercise_GetResult):
    from plumbing_interface_demo.action._action_exercise import ActionExercise_GetResult_Request as Request
    from plumbing_interface_demo.action._action_exercise import ActionExercise_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ActionExercise_FeedbackMessage(type):
    """Metaclass of message 'ActionExercise_FeedbackMessage'."""

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
                'plumbing_interface_demo.action.ActionExercise_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__action_exercise__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__action_exercise__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__action_exercise__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__action_exercise__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__action_exercise__feedback_message

            from plumbing_interface_demo.action import ActionExercise
            if ActionExercise.Feedback.__class__._TYPE_SUPPORT is None:
                ActionExercise.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionExercise_FeedbackMessage(metaclass=Metaclass_ActionExercise_FeedbackMessage):
    """Message class 'ActionExercise_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'plumbing_interface_demo/ActionExercise_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['plumbing_interface_demo', 'action'], 'ActionExercise_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from plumbing_interface_demo.action._action_exercise import ActionExercise_Feedback
        self.feedback = kwargs.get('feedback', ActionExercise_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from plumbing_interface_demo.action._action_exercise import ActionExercise_Feedback
            assert \
                isinstance(value, ActionExercise_Feedback), \
                "The 'feedback' field must be a sub message of type 'ActionExercise_Feedback'"
        self._feedback = value


class Metaclass_ActionExercise(type):
    """Metaclass of action 'ActionExercise'."""

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
                'plumbing_interface_demo.action.ActionExercise')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__action_exercise

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from plumbing_interface_demo.action import _action_exercise
            if _action_exercise.Metaclass_ActionExercise_SendGoal._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_SendGoal.__import_type_support__()
            if _action_exercise.Metaclass_ActionExercise_GetResult._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_GetResult.__import_type_support__()
            if _action_exercise.Metaclass_ActionExercise_FeedbackMessage._TYPE_SUPPORT is None:
                _action_exercise.Metaclass_ActionExercise_FeedbackMessage.__import_type_support__()


class ActionExercise(metaclass=Metaclass_ActionExercise):

    # The goal message defined in the action definition.
    from plumbing_interface_demo.action._action_exercise import ActionExercise_Goal as Goal
    # The result message defined in the action definition.
    from plumbing_interface_demo.action._action_exercise import ActionExercise_Result as Result
    # The feedback message defined in the action definition.
    from plumbing_interface_demo.action._action_exercise import ActionExercise_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from plumbing_interface_demo.action._action_exercise import ActionExercise_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from plumbing_interface_demo.action._action_exercise import ActionExercise_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from plumbing_interface_demo.action._action_exercise import ActionExercise_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
