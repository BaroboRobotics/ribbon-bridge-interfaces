#include "gen-robot.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Robot),
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
