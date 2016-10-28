#include <pwm2eye.h>

LedLight led(14);

void setup() {}
void loop() {
  led.show(true,random(255));
  delay(3000);
}
