find_package(Protobuf REQUIRED)

include_directories("${PROJECT_BINARY_DIR}/person_lib") # shouldn't have to hardcode lib name here!
include_directories("${PROJECT_BINARY_DIR}/car_lib") # shouldn't have to hardcode lib name here!


add_executable(p5_app main.cpp)

target_link_libraries(p5_app ${PROTOBUF_LIBRARIES})

target_link_libraries(p5_app person car)

