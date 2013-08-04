find_package(Protobuf REQUIRED)

#include_directories(${PROTOBUF_INCLUDE_DIRS})
#include_directories(${CMAKE_CURRENT_BINARY_DIR})
PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS person.proto)
#add_executable(proto1 main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
#target_link_libraries(person ${PROTOBUF_LIBRARIES})





add_library(person ${PROTO_SRCS} ${PROTO_HDRS})

target_link_libraries(person ${PROTOBUF_LIBRARIES})
