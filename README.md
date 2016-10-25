# ledlight

Micro library for Led driving via controllers working under Arduino enviroment.
Based on built-in function analogWrite(), focused on optical correction of light using gamma maps and non-linear functions.


<h3>Basic Usage</h3>

Add a library to your project:
<pre><code>
#include <pre><LedLight.h></pre>
LedLight white(14);</code></pre>

void setup() {  }
void loop() {
  white.show(true,random(255));
  delay(3000);
}</code></pre>
