#include <FastLED.h>

#define NUM_LEDS 8
#define DATA_PIN 12
CRGB leds[NUM_LEDS];

void setup() {
  // sets the first LED of the strip to a red color
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
  
  leds[0]=CRGB::Magenta;
  FastLED.show();
  delay(500);
  leds[1]=CRGB::Purple;
  FastLED.show();
  delay(500);
  leds[2]=CRGB::Blue;
  FastLED.show();
  delay(500);
  leds[3]=CRGB::Cyan;
  FastLED.show();
  delay(500);
  leds[4]=CRGB::Green;
  FastLED.show();
  delay(500);
  leds[5]=CRGB::Yellow;
  FastLED.show();
  delay(500);
  leds[6]=CRGB::Orange;
  FastLED.show();
  delay(500);
  leds[7]=CRGB::Red;
  FastLED.show();
  delay(500);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}