#include "gen-robot.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Robot),
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
