#ifndef barobo_Robot_INTERFACE
#define barobo_Robot_INTERFACE

#include "rpc/def.hpp"
#include "robot.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Robot), (0, 0, 0),
        // all attributes
        (ledColor)
        (buzzerFrequency)
        ,
        // all settable attributes
        (ledColor)
        (buzzerFrequency)
        ,
        // all subscribable attributes
        (buzzerFrequency)
        ,
        // all methods
        (enableButtonEvent)
        (getMotorControllerAlphaI)
        (getMotorControllerAlphaF)
        (getMotorControllerOmega)
        (getMotorControllerProportionalGain)
        (getMotorControllerIntegratorGain)
        (getMotorControllerDerivativeGain)
        (setMotorControllerAlphaI)
        (setMotorControllerAlphaF)
        (setMotorControllerOmega)
        (setMotorControllerProportionalGain)
        (setMotorControllerIntegratorGain)
        (setMotorControllerDerivativeGain)
        (getEncoderValues)
        (getButtonState)
        (move)
        ,
        // all broadcasts
        (buttonEvent)
        )

#endif
