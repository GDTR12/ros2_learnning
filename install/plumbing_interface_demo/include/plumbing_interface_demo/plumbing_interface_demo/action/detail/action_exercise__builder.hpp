// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__BUILDER_HPP_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_Goal_goal_theta
{
public:
  explicit Init_ActionExercise_Goal_goal_theta(::plumbing_interface_demo::action::ActionExercise_Goal & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_Goal goal_theta(::plumbing_interface_demo::action::ActionExercise_Goal::_goal_theta_type arg)
  {
    msg_.goal_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Goal msg_;
};

class Init_ActionExercise_Goal_goal_y
{
public:
  explicit Init_ActionExercise_Goal_goal_y(::plumbing_interface_demo::action::ActionExercise_Goal & msg)
  : msg_(msg)
  {}
  Init_ActionExercise_Goal_goal_theta goal_y(::plumbing_interface_demo::action::ActionExercise_Goal::_goal_y_type arg)
  {
    msg_.goal_y = std::move(arg);
    return Init_ActionExercise_Goal_goal_theta(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Goal msg_;
};

class Init_ActionExercise_Goal_goal_x
{
public:
  Init_ActionExercise_Goal_goal_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_Goal_goal_y goal_x(::plumbing_interface_demo::action::ActionExercise_Goal::_goal_x_type arg)
  {
    msg_.goal_x = std::move(arg);
    return Init_ActionExercise_Goal_goal_y(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_Goal>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_Goal_goal_x();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_Result_finally_theta
{
public:
  explicit Init_ActionExercise_Result_finally_theta(::plumbing_interface_demo::action::ActionExercise_Result & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_Result finally_theta(::plumbing_interface_demo::action::ActionExercise_Result::_finally_theta_type arg)
  {
    msg_.finally_theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Result msg_;
};

class Init_ActionExercise_Result_finally_y
{
public:
  explicit Init_ActionExercise_Result_finally_y(::plumbing_interface_demo::action::ActionExercise_Result & msg)
  : msg_(msg)
  {}
  Init_ActionExercise_Result_finally_theta finally_y(::plumbing_interface_demo::action::ActionExercise_Result::_finally_y_type arg)
  {
    msg_.finally_y = std::move(arg);
    return Init_ActionExercise_Result_finally_theta(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Result msg_;
};

class Init_ActionExercise_Result_finally_x
{
public:
  Init_ActionExercise_Result_finally_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_Result_finally_y finally_x(::plumbing_interface_demo::action::ActionExercise_Result::_finally_x_type arg)
  {
    msg_.finally_x = std::move(arg);
    return Init_ActionExercise_Result_finally_y(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_Result>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_Result_finally_x();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_Feedback_distance
{
public:
  Init_ActionExercise_Feedback_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionExercise_Feedback distance(::plumbing_interface_demo::action::ActionExercise_Feedback::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_Feedback>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_Feedback_distance();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_SendGoal_Request_goal
{
public:
  explicit Init_ActionExercise_SendGoal_Request_goal(::plumbing_interface_demo::action::ActionExercise_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Request goal(::plumbing_interface_demo::action::ActionExercise_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Request msg_;
};

class Init_ActionExercise_SendGoal_Request_goal_id
{
public:
  Init_ActionExercise_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_SendGoal_Request_goal goal_id(::plumbing_interface_demo::action::ActionExercise_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionExercise_SendGoal_Request_goal(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_SendGoal_Request>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_SendGoal_Request_goal_id();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_SendGoal_Response_stamp
{
public:
  explicit Init_ActionExercise_SendGoal_Response_stamp(::plumbing_interface_demo::action::ActionExercise_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Response stamp(::plumbing_interface_demo::action::ActionExercise_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Response msg_;
};

class Init_ActionExercise_SendGoal_Response_accepted
{
public:
  Init_ActionExercise_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_SendGoal_Response_stamp accepted(::plumbing_interface_demo::action::ActionExercise_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActionExercise_SendGoal_Response_stamp(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_SendGoal_Response>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_SendGoal_Response_accepted();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_GetResult_Request_goal_id
{
public:
  Init_ActionExercise_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionExercise_GetResult_Request goal_id(::plumbing_interface_demo::action::ActionExercise_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_GetResult_Request>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_GetResult_Request_goal_id();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_GetResult_Response_result
{
public:
  explicit Init_ActionExercise_GetResult_Response_result(::plumbing_interface_demo::action::ActionExercise_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_GetResult_Response result(::plumbing_interface_demo::action::ActionExercise_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_GetResult_Response msg_;
};

class Init_ActionExercise_GetResult_Response_status
{
public:
  Init_ActionExercise_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_GetResult_Response_result status(::plumbing_interface_demo::action::ActionExercise_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionExercise_GetResult_Response_result(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_GetResult_Response>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_GetResult_Response_status();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionExercise_FeedbackMessage_feedback
{
public:
  explicit Init_ActionExercise_FeedbackMessage_feedback(::plumbing_interface_demo::action::ActionExercise_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionExercise_FeedbackMessage feedback(::plumbing_interface_demo::action::ActionExercise_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_FeedbackMessage msg_;
};

class Init_ActionExercise_FeedbackMessage_goal_id
{
public:
  Init_ActionExercise_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionExercise_FeedbackMessage_feedback goal_id(::plumbing_interface_demo::action::ActionExercise_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionExercise_FeedbackMessage_feedback(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionExercise_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionExercise_FeedbackMessage>()
{
  return plumbing_interface_demo::action::builder::Init_ActionExercise_FeedbackMessage_goal_id();
}

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__BUILDER_HPP_
