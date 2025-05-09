add_library(engine SHARED engine.cc)
target_link_libraries(engine ${Protobuf_LIBRARIES} ${GLOG_LIBRARIES} ${YAML_CPP_LIBRARIES} ${ARROW_LIB})