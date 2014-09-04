#include "gen-robot.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Robot),
        // all methods
        (getLedColor)
        (setLedColor)
        (getBuzzerFrequency)
        (setBuzzerFrequency)
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
        (getFirmwareVersion)
        (move)
        (stop)
        ,
        // all broadcasts
        (buttonEvent)
        )
