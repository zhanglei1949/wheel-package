file(GLOB SOURCE_PY "wheel_test/*")

file(GLOB_RECURSE SOURCE_CPP "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cc")
pybind11_add_module(wheel_bind SHARED ${SOURCE_CPP})

target_link_libraries(wheel_bind PRIVATE engine)