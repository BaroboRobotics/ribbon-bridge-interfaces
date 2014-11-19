#ifndef barobo_Daemon_INTERFACE
#define barobo_Daemon_INTERFACE

#include "rpc/def.hpp"
#include "daemon.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Daemon), (0, 0, 0),
        // all methods
        (getRobotTcpEndpoint)
        ,
        // all broadcasts
        (robotPluggedIn)
        )

#endif
