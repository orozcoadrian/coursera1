cmake_minimum_required(VERSION 2.6)
project(proto1)
#include(FindProtobuf)
find_package(Protobuf REQUIRED)

#include_directories(${PROTOBUF_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS person.proto)
add_executable(proto1 main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(proto1 ${PROTOBUF_LIBRARIES})

