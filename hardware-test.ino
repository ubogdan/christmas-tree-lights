
#include <NeoPixelBus.h>

#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>


const uint16_t PixelCount = 50; // this example assumes 4 pixels, making it smaller will cause a failure
const uint8_t PixelPin = D5;  // make sure to set this to the correct pin, ignored for Esp8266


NeoPixelBus<NeoRgbFeature, Neo800KbpsMethod> strip(PixelCount, PixelPin);

#define saturation 128

RgbColor red(saturation, 0, 0);
RgbColor green(0, saturation, 0);
RgbColor blue(0, 0, saturation);

void setup()
{

    Serial.begin(115200);
    while (!Serial); // wait for serial attach

    Serial.println();
    Serial.println("Initializing...");
    Serial.flush();
    
    // Resets all the neopixels to an off state
    strip.Begin();
    strip.Show();

    Serial.println();
    Serial.println("Running...");
}


void loop()
{
    for(uint16_t i=0; i<PixelCount; i++) {
      strip.SetPixelColor(i, red);
    }
    strip.Show();

    delay(1000);
    
    for(uint16_t i=0; i<PixelCount; i++) {
      strip.SetPixelColor(i, green);
    }
    strip.Show();

    delay(1000);
    for(uint16_t i=0; i<PixelCount; i++) {
      strip.SetPixelColor(i, blue);
    }
    strip.Show();
    delay(1000);

}
