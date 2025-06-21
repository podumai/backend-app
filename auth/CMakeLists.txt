cmake_minimum_required(VERSION 3.15)
project(AUTH-SERVICE VERSION 1.0.0
                     LANGUAGES CXX)

find_package(userver COMPONENTS core REQUIRED)

add_library(
    ${PROJECT_NAME}_objs OBJECT
    src/sub_handlers/hello_function.cpp
    src/handlers/hello_handler.cpp
)
target_include_directories(${PROJECT_NAME}_objs PUBLIC include)
target_link_libraries(${PROJECT_NAME}_objs userver::core)

add_executable(${PROJECT_NAME} src/main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_objs)