# christmas-tree-lights
ESP8266 powered christmas tree lights (status: WIP)

Hardware
========

![Schematic](/images/schematic.png?raw=true)

#### Requirements
 * 1x ESP8266 (D1 Mini) 
 * 1x WS2812b/SK6812 LED Strip or "_Neopixel_" LED Strip
 * 1x 74HCT08 Quad AND gate 
 * 4x 100nF capacitor
 * 1x 1N4148 diode or similar
 * 1x 400ohm rezistor

This is printed circuit preview.  

![Printed Circuit ](/images/components.png?raw=true)

The project includes the [board](/eagle/schematic.brd) and [schematic](/eagle/schematic.sch) for Eagle CAD. You may 
need to download the following library if you want to edit the cad files.

 * [ESP8266 Eagle Library](https://github.com/wvanvlaenderen/ESP8266-Eagle_Library) used in schematic.

#### Testing the hardware
* Adjust the PixelCount from sketch with the number of leds of the strip you are going to use. 
* Upload hardware-test.ino into d1 using Aduino.
* The program should light up all leds in the follwing order Red , Green , Blue. In the event of Green si reversed with
 Blue you shoud replace  
```
NeoPixelBus<NeoRgbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);
```
with 
```
NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);
```

Software
========
I'm going to use Arduino as programing 

Libraries
  * NeoPixelBus https://github.com/Makuna/NeoPixelBus
  * ESP8266WiFi https://github.com/esp8266/Arduino
  * WiFiManager, https://github.com/tzapu/WiFiManager
  * ESP8266mDNS.h, https://github.com/esp8266/Arduino/tree/master/libraries/ESP8266mDNS


 
 