# ledlight

Micro library for Led driving via controllers working under Arduino enviroment.
Based on built-in function analogWrite(), focused on optical correction of light using gamma maps and non-linear functions.


<h3>Basic Usage</h3>
Add a library to your project:
<pre><code>
#include "LedLight.h"
</code></pre>

Add an LedLight Object into your project, uisung PWM PIN number as an argument in brackets().
<pre><code>
LedLight led(14);
</code></pre>

Put in loop section show function of an object using two arguments: boolean state of an output and brightness value.
<pre><code>
led.show(bool State, uint16_t Brightness);
</code></pre>



