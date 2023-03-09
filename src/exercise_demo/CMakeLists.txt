cmake_minimum_required(VERSION 3.8)
project(exercise_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(plumbing_interface_demo REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)

add_executable(eTopic_talker src/eTopic_talker.cpp)
target_include_directories(eTopic_talker PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(eTopic_talker PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  eTopic_talker
  "rclcpp"
  "turtlesim"
  "plumbing_interface_demo"
  "geometry_msgs"
  "rclcpp_action"
)

add_executable(eServiceServer src/eServiceServer.cpp)
target_include_directories(eServiceServer PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(eServiceServer PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  eServiceServer
  "rclcpp"
  "turtlesim"
  "plumbing_interface_demo"
  "geometry_msgs"
  "rclcpp_action"
)

add_executable(eServiceClient src/eServiceClient.cpp)
target_include_directories(eServiceClient PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(eServiceClient PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  eServiceClient
  "rclcpp"
  "turtlesim"
  "plumbing_interface_demo"
  "geometry_msgs"
  "rclcpp_action"
)

add_executable(eActionServer src/eActionServer.cpp)
target_include_directories(eActionServer PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(eActionServer PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  eActionServer
  "rclcpp"
  "turtlesim"
  "plumbing_interface_demo"
  "geometry_msgs"
  "rclcpp_action"
)

add_executable(eActionClient src/eActionClient.cpp)
target_include_directories(eActionClient PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(eActionClient PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  eActionClient
  "rclcpp"
  "turtlesim"
  "plumbing_interface_demo"
  "geometry_msgs"
  "rclcpp_action"
)


install(TARGETS 
  eTopic_talker 
  eServiceServer 
  eServiceClient
  eActionServer
  eActionClient 
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
