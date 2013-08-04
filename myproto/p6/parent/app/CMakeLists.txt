
include_directories("${PROJECT_BINARY_DIR}/person_lib") # shouldn't have to hardcode lib name here!
include_directories("${PROJECT_BINARY_DIR}/car_lib") # shouldn't have to hardcode lib name here!


add_executable(app main.cpp)

target_link_libraries(app ${PROTOBUF_LIBRARIES} 
	         	  person 
			  car)

