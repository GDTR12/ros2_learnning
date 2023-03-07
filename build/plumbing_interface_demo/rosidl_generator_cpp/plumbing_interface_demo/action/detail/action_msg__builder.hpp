// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from plumbing_interface_demo:action/ActionMsg.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__BUILDER_HPP_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "plumbing_interface_demo/action/detail/action_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_Goal_num
{
public:
  Init_ActionMsg_Goal_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionMsg_Goal num(::plumbing_interface_demo::action::ActionMsg_Goal::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_Goal>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_Goal_num();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_Result_sum
{
public:
  Init_ActionMsg_Result_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionMsg_Result sum(::plumbing_interface_demo::action::ActionMsg_Result::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_Result>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_Result_sum();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_Feedback_progess
{
public:
  Init_ActionMsg_Feedback_progess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionMsg_Feedback progess(::plumbing_interface_demo::action::ActionMsg_Feedback::_progess_type arg)
  {
    msg_.progess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_Feedback>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_Feedback_progess();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_SendGoal_Request_goal
{
public:
  explicit Init_ActionMsg_SendGoal_Request_goal(::plumbing_interface_demo::action::ActionMsg_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Request goal(::plumbing_interface_demo::action::ActionMsg_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Request msg_;
};

class Init_ActionMsg_SendGoal_Request_goal_id
{
public:
  Init_ActionMsg_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionMsg_SendGoal_Request_goal goal_id(::plumbing_interface_demo::action::ActionMsg_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionMsg_SendGoal_Request_goal(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_SendGoal_Request>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_SendGoal_Request_goal_id();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_SendGoal_Response_stamp
{
public:
  explicit Init_ActionMsg_SendGoal_Response_stamp(::plumbing_interface_demo::action::ActionMsg_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Response stamp(::plumbing_interface_demo::action::ActionMsg_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Response msg_;
};

class Init_ActionMsg_SendGoal_Response_accepted
{
public:
  Init_ActionMsg_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionMsg_SendGoal_Response_stamp accepted(::plumbing_interface_demo::action::ActionMsg_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ActionMsg_SendGoal_Response_stamp(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_SendGoal_Response>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_SendGoal_Response_accepted();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_GetResult_Request_goal_id
{
public:
  Init_ActionMsg_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::plumbing_interface_demo::action::ActionMsg_GetResult_Request goal_id(::plumbing_interface_demo::action::ActionMsg_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_GetResult_Request>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_GetResult_Request_goal_id();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_GetResult_Response_result
{
public:
  explicit Init_ActionMsg_GetResult_Response_result(::plumbing_interface_demo::action::ActionMsg_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionMsg_GetResult_Response result(::plumbing_interface_demo::action::ActionMsg_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_GetResult_Response msg_;
};

class Init_ActionMsg_GetResult_Response_status
{
public:
  Init_ActionMsg_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionMsg_GetResult_Response_result status(::plumbing_interface_demo::action::ActionMsg_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ActionMsg_GetResult_Response_result(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_GetResult_Response>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_GetResult_Response_status();
}

}  // namespace plumbing_interface_demo


namespace plumbing_interface_demo
{

namespace action
{

namespace builder
{

class Init_ActionMsg_FeedbackMessage_feedback
{
public:
  explicit Init_ActionMsg_FeedbackMessage_feedback(::plumbing_interface_demo::action::ActionMsg_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::plumbing_interface_demo::action::ActionMsg_FeedbackMessage feedback(::plumbing_interface_demo::action::ActionMsg_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_FeedbackMessage msg_;
};

class Init_ActionMsg_FeedbackMessage_goal_id
{
public:
  Init_ActionMsg_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionMsg_FeedbackMessage_feedback goal_id(::plumbing_interface_demo::action::ActionMsg_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ActionMsg_FeedbackMessage_feedback(msg_);
  }

private:
  ::plumbing_interface_demo::action::ActionMsg_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::plumbing_interface_demo::action::ActionMsg_FeedbackMessage>()
{
  return plumbing_interface_demo::action::builder::Init_ActionMsg_FeedbackMessage_goal_id();
}

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_MSG__BUILDER_HPP_
