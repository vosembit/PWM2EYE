# ledlight

Micro library for Led driving via controllers working under Arduino enviroment.
Based on built-in function analogWrite(), focused on optical correction of light using gamma maps and non-linear functions.


Simple example

How quickly can you get up and running with the library? Here's a simple blink program:
<pre><code>
#include "FastLED.h"
#define NUM_LEDS 60
CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS); }
void loop() {
    leds[0] = CRGB::White; FastLED.show(); delay(30);
    leds[0] = CRGB::Black; FastLED.show(); delay(30);
}
</code></pre>
