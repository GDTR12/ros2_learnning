cmake_minimum_required(VERSION 3.8)
project(tf_boardcaster_demo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(turtlesim REQUIRED)

add_executable(static_tf_boardcaster src/static_tf_boardcaster.cpp)
target_include_directories(static_tf_boardcaster PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(static_tf_boardcaster PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  static_tf_boardcaster
  "rclcpp"
  "tf2"
  "tf2_ros"
)

add_executable(dynamic_tf_boardcaster src/dynamic_tf_boardcaster.cpp)
target_include_directories(dynamic_tf_boardcaster PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(dynamic_tf_boardcaster PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  dynamic_tf_boardcaster
  "rclcpp"
  "tf2"
  "tf2_ros"
  "turtlesim"
)

add_executable(point_tf_broadcaster src/point_tf_broadcaster.cpp)
target_include_directories(point_tf_broadcaster PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(point_tf_broadcaster PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  point_tf_broadcaster
  "rclcpp"
  "tf2"
  "tf2_ros"
  "turtlesim"
)

add_executable(listenser_tf src/listenser_tf.cpp)
target_include_directories(listenser_tf PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(listenser_tf PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  listenser_tf
  "rclcpp"
  "tf2"
  "tf2_ros"
  "turtlesim"
)

install(TARGETS static_tf_boardcaster dynamic_tf_boardcaster point_tf_broadcaster listenser_tf
  DESTINATION lib/${PROJECT_NAME})

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
