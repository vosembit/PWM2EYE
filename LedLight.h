/*
  LedLight.h - Micro library for Led driving
  via controllers working under Arduino enviroment.
  Based on built-in function analogWrite(),
  focused on optical correction of led light
  using gamma maps and non-linear functions.

  "- двумя руками черпай, говорю!(с)"
*/

#ifndef LEDLIGHT_H_
#define LEDLIGHT_H_

#include <Arduino.h>

class LedLight {
  public:
    LedLight(int pin);
    void show(bool sw, uint16_t br);

  private:
    uint8_t   _pin;
    uint16_t  c_br;
};

#endif
