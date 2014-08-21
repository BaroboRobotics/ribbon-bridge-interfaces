#ifndef barobo_Robot_INTERFACE
#define barobo_Robot_INTERFACE

#include "rpc/def.hpp"
#include "robot.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Robot), (0, 0, 0),
        // all attributes
        (motorControllerAlphaI)
        (motorControllerAlphaF)
        (motorControllerOmega)
        (motorControllerProportionalGain)
        (motorControllerIntegratorGain)
        (motorControllerDerivativeGain)
        (ledColor)
        (buzzerFrequency)
        ,
        // all settable attributes
        (motorControllerAlphaI)
        (motorControllerAlphaF)
        (motorControllerOmega)
        (motorControllerProportionalGain)
        (motorControllerIntegratorGain)
        (motorControllerDerivativeGain)
        (ledColor)
        (buzzerFrequency)
        ,
        // all subscribable attributes
        (buzzerFrequency)
        ,
        // all methods
        (getEncoderValues)
        (getButtonState)
        (move)
        ,
        // all broadcasts
        (buttonEvent)
        )

#endif
