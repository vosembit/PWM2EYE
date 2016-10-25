# ledlight

Micro library for Led driving via controllers working under Arduino enviroment.
Based on built-in function analogWrite(), focused on optical correction of light using gamma maps and non-linear functions.


<h3>Simple example</h3>

How quickly can you get up and running with the library? Here's a simple blink program:
<pre><code>
#include <LedLight.h>
LedLight white(14);

void setup() {  }
void loop() {
  white.show(true,random(255));
  delay(3000);
}</code></pre>
