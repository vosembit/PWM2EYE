/*
  LedLight.h - Micro library for Led driving
  via controllers working under Arduino enviroment.
  Based on built-in function analogWrite(),
  focused on optical correction of light
  using gamma maps and non-linear functions.

  "- двумя руками черпай, говорю!(с)"
*/

#include <Arduino.h>
#include "LedLight.h"

LedLight::LedLight(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void LedLight::show(bool sw, uint16_t br) {
  int n, n_br;
  int d = 1;
  if  (sw) n_br = br;
  else  n_br = 0;
  if (n_br != c_br) {
    if (n_br < c_br) {
      n = c_br - n_br;
      d = -d;
    } else {
      n = n_br - c_br;
    }
    for (int i = 0; i < n; i++) {
      c_br += d;
      analogWrite(_pin, c_br);
      delay(1);
    }
  }
  c_br = n_br;
  analogWrite(_pin, c_br);
}
