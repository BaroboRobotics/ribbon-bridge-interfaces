cmake_minimum_required(VERSION 2.8)
project(ribbon-bridge-interfaces)

# Create a robot-interface target with an INCLUDE_DIRECTORIES property all set
# up for dependees to use.
rpc_compile_proto(ROBOT_PROTO_C_FILE ROBOT_PROTO_H_FILE robot.proto)
set(SOURCES ${ROBOT_PROTO_C_FILE} gen-robot.pb.cpp)
set_source_files_properties(gen-robot.pb.cpp PROPERTIES COMPILE_FLAGS -std=c++11)
add_library(robot-interface STATIC ${SOURCES})
# Some files in ${SOURCES} indirectly depend on rpc.pb.h, which is only
# generated when ribbon-bridge itself is built. Make sure this happens in the
# correct order.
add_dependencies(robot-interface rpc)
get_filename_component(protoDir ${ROBOT_PROTO_H_FILE} DIRECTORY)
target_include_directories(robot-interface
    PRIVATE ${NANOPB_INCLUDE_DIR}
    PUBLIC $<TARGET_PROPERTY:rpc,INCLUDE_DIRECTORIES>
    PUBLIC ${protoDir}
    PUBLIC .)
