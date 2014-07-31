cmake_minimum_required(VERSION 2.8)
project(ribbon-bridge-interfaces)

rpc_add_interface(robot-interface robot.proto)
rpc_add_interface(dongle-interface dongle.proto)
