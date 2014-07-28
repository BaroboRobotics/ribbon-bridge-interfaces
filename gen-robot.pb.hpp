#ifndef barobo_Robot_INTERFACE
#define barobo_Robot_INTERFACE

#include "rpc/def.hpp"
#include "robot.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Robot), (0, 0, 0),
        // all attributes
        (ledColor)
        ,
        // all settable attributes
        (ledColor)
        ,
        // all subscribable attributes
        (ledColor)
        ,
        // all methods
        (dummyMethod)
        ,
        // all broadcasts
        (dummyBroadcast)
        )

#endif
