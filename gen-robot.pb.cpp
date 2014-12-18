#include "gen-robot.pb.hpp"
#include "rpc/def.hpp"

RPCDEF_CPP((barobo, Robot),
        // all methods
        (getAccelerometerData)
        (getLedColor)
        (setLedColor)
        (getBuzzerFrequency)
        (setBuzzerFrequency)
        (enableAccelerometerEvent)
        (enableButtonEvent)
        (enableEncoderEvent)
        (enableJointEvent)
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
        (getFormFactor)
        (getJointStates)
        (getButtonState)
        (getFirmwareVersion)
        (move)
        (stop)
        (writeEeprom)
        ,
        // all broadcasts
        (buttonEvent)
        (encoderEvent)
        (accelerometerEvent)
        (jointEvent)
        (debugMessageEvent)
        )
