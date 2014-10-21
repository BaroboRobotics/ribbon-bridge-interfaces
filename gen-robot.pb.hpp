#ifndef barobo_Robot_INTERFACE
#define barobo_Robot_INTERFACE

#include "rpc/def.hpp"
#include "robot.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Robot), (0, 0, 3),
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
        (getButtonState)
        (getFirmwareVersion)
        (move)
        (stop)
        ,
        // all broadcasts
        (buttonEvent)
        (encoderEvent)
        (accelerometerEvent)
        (jointEvent)
        )

#endif
