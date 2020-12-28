set (TARGET_NAME "test_app")

set(SRC main.cpp otherclass.cpp otherclass0.cpp)

add_executable(${TARGET_NAME} ${SRC})
target_link_libraries(${TARGET_NAME} PRIVATE test_lib)
target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
