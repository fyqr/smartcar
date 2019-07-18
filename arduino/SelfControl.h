#ifndef __SELF_CONTROL_H_
#define __SELF_CONTROL_H_
#pragma once

#include "Arduino.h"
#include "Control.h"
#include "MotorDriver.h"

class SelfControl : public Control
{
   public:
     virtual void Execute(MotorDriver driver);

};

#endif