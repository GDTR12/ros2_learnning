// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from plumbing_interface_demo:action/ActionExercise.idl
// generated code does not contain a copyright notice

#ifndef PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_HPP_
#define PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Goal __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Goal __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_Goal_
{
  using Type = ActionExercise_Goal_<ContainerAllocator>;

  explicit ActionExercise_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_x = 0.0f;
      this->goal_y = 0.0f;
      this->goal_theta = 0.0f;
    }
  }

  explicit ActionExercise_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_x = 0.0f;
      this->goal_y = 0.0f;
      this->goal_theta = 0.0f;
    }
  }

  // field types and members
  using _goal_x_type =
    float;
  _goal_x_type goal_x;
  using _goal_y_type =
    float;
  _goal_y_type goal_y;
  using _goal_theta_type =
    float;
  _goal_theta_type goal_theta;

  // setters for named parameter idiom
  Type & set__goal_x(
    const float & _arg)
  {
    this->goal_x = _arg;
    return *this;
  }
  Type & set__goal_y(
    const float & _arg)
  {
    this->goal_y = _arg;
    return *this;
  }
  Type & set__goal_theta(
    const float & _arg)
  {
    this->goal_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Goal
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Goal
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_Goal_ & other) const
  {
    if (this->goal_x != other.goal_x) {
      return false;
    }
    if (this->goal_y != other.goal_y) {
      return false;
    }
    if (this->goal_theta != other.goal_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_Goal_

// alias to use template instance with default allocator
using ActionExercise_Goal =
  plumbing_interface_demo::action::ActionExercise_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Result __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Result __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_Result_
{
  using Type = ActionExercise_Result_<ContainerAllocator>;

  explicit ActionExercise_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finally_x = 0.0f;
      this->finally_y = 0.0f;
      this->finally_theta = 0.0f;
    }
  }

  explicit ActionExercise_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finally_x = 0.0f;
      this->finally_y = 0.0f;
      this->finally_theta = 0.0f;
    }
  }

  // field types and members
  using _finally_x_type =
    float;
  _finally_x_type finally_x;
  using _finally_y_type =
    float;
  _finally_y_type finally_y;
  using _finally_theta_type =
    float;
  _finally_theta_type finally_theta;

  // setters for named parameter idiom
  Type & set__finally_x(
    const float & _arg)
  {
    this->finally_x = _arg;
    return *this;
  }
  Type & set__finally_y(
    const float & _arg)
  {
    this->finally_y = _arg;
    return *this;
  }
  Type & set__finally_theta(
    const float & _arg)
  {
    this->finally_theta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Result
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Result
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_Result_ & other) const
  {
    if (this->finally_x != other.finally_x) {
      return false;
    }
    if (this->finally_y != other.finally_y) {
      return false;
    }
    if (this->finally_theta != other.finally_theta) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_Result_

// alias to use template instance with default allocator
using ActionExercise_Result =
  plumbing_interface_demo::action::ActionExercise_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo


#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_Feedback __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_Feedback_
{
  using Type = ActionExercise_Feedback_<ContainerAllocator>;

  explicit ActionExercise_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit ActionExercise_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Feedback
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_Feedback
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_Feedback_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_Feedback_

// alias to use template instance with default allocator
using ActionExercise_Feedback =
  plumbing_interface_demo::action::ActionExercise_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Request __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_SendGoal_Request_
{
  using Type = ActionExercise_SendGoal_Request_<ContainerAllocator>;

  explicit ActionExercise_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ActionExercise_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const plumbing_interface_demo::action::ActionExercise_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Request
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Request
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_SendGoal_Request_

// alias to use template instance with default allocator
using ActionExercise_SendGoal_Request =
  plumbing_interface_demo::action::ActionExercise_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Response __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_SendGoal_Response_
{
  using Type = ActionExercise_SendGoal_Response_<ContainerAllocator>;

  explicit ActionExercise_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ActionExercise_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Response
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_SendGoal_Response
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_SendGoal_Response_

// alias to use template instance with default allocator
using ActionExercise_SendGoal_Response =
  plumbing_interface_demo::action::ActionExercise_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo

namespace plumbing_interface_demo
{

namespace action
{

struct ActionExercise_SendGoal
{
  using Request = plumbing_interface_demo::action::ActionExercise_SendGoal_Request;
  using Response = plumbing_interface_demo::action::ActionExercise_SendGoal_Response;
};

}  // namespace action

}  // namespace plumbing_interface_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Request __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_GetResult_Request_
{
  using Type = ActionExercise_GetResult_Request_<ContainerAllocator>;

  explicit ActionExercise_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ActionExercise_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Request
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Request
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_GetResult_Request_

// alias to use template instance with default allocator
using ActionExercise_GetResult_Request =
  plumbing_interface_demo::action::ActionExercise_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo


// Include directives for member types
// Member 'result'
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Response __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_GetResult_Response_
{
  using Type = ActionExercise_GetResult_Response_<ContainerAllocator>;

  explicit ActionExercise_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ActionExercise_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const plumbing_interface_demo::action::ActionExercise_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Response
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_GetResult_Response
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_GetResult_Response_

// alias to use template instance with default allocator
using ActionExercise_GetResult_Response =
  plumbing_interface_demo::action::ActionExercise_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo

namespace plumbing_interface_demo
{

namespace action
{

struct ActionExercise_GetResult
{
  using Request = plumbing_interface_demo::action::ActionExercise_GetResult_Request;
  using Response = plumbing_interface_demo::action::ActionExercise_GetResult_Response;
};

}  // namespace action

}  // namespace plumbing_interface_demo


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "plumbing_interface_demo/action/detail/action_exercise__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__plumbing_interface_demo__action__ActionExercise_FeedbackMessage __declspec(deprecated)
#endif

namespace plumbing_interface_demo
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ActionExercise_FeedbackMessage_
{
  using Type = ActionExercise_FeedbackMessage_<ContainerAllocator>;

  explicit ActionExercise_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ActionExercise_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const plumbing_interface_demo::action::ActionExercise_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_FeedbackMessage
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__plumbing_interface_demo__action__ActionExercise_FeedbackMessage
    std::shared_ptr<plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionExercise_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionExercise_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionExercise_FeedbackMessage_

// alias to use template instance with default allocator
using ActionExercise_FeedbackMessage =
  plumbing_interface_demo::action::ActionExercise_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace plumbing_interface_demo

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace plumbing_interface_demo
{

namespace action
{

struct ActionExercise
{
  /// The goal message defined in the action definition.
  using Goal = plumbing_interface_demo::action::ActionExercise_Goal;
  /// The result message defined in the action definition.
  using Result = plumbing_interface_demo::action::ActionExercise_Result;
  /// The feedback message defined in the action definition.
  using Feedback = plumbing_interface_demo::action::ActionExercise_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = plumbing_interface_demo::action::ActionExercise_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = plumbing_interface_demo::action::ActionExercise_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = plumbing_interface_demo::action::ActionExercise_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ActionExercise ActionExercise;

}  // namespace action

}  // namespace plumbing_interface_demo

#endif  // PLUMBING_INTERFACE_DEMO__ACTION__DETAIL__ACTION_EXERCISE__STRUCT_HPP_
