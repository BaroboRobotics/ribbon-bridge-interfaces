cmake_minimum_required(VERSION 2.8)
project(robotinterface)

rpc_compile_proto(ROBOT_PROTO_C_FILE ROBOT_PROTO_H_FILE robot.proto)

add_library(robotpb OBJECT ${ROBOT_PROTO_C_FILE})
target_include_directories(robotpb PRIVATE ${NANOPB_INCLUDE_DIR})
