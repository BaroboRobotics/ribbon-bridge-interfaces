#ifndef barobo_Dongle_INTERFACE
#define barobo_Dongle_INTERFACE

#include "rpc/def.hpp"
#include "dongle.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Dongle), (0, 0, 0),
        // all attributes
        (dummyAttribute)
        ,
        // all settable attributes
        (dummyAttribute)
        ,
        // all subscribable attributes
        (dummyAttribute)
        ,
        // all methods
        (transmitUnicast)
        ,
        // all broadcasts
        (receiveUnicast)
        )

#endif
