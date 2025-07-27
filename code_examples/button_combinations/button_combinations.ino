#include <FastLED.h>

#define NUM_LEDS 8
#define DATA_PIN 12
#define BUTTON_PIN 2

int led_kombi = 0;           // LEDs starten mit kombination 0
bool button_war = HIGH;      // waren sie vor Knopfdruck an?

CRGB leds[NUM_LEDS];

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);


}

void loop() {
  bool button_ist = digitalRead(BUTTON_PIN);
  if (button_war == HIGH && button_ist == LOW) {
    led_kombi = (led_kombi + 1)%3;  // change 3 to 4 if you want to add a combination

    if (led_kombi==0) {
      leds[0]=CRGB::Magenta;
      leds[1]=CRGB::Purple;
      leds[2]=CRGB::Blue;
      leds[3]=CRGB::Cyan;
      leds[4]=CRGB::Green;
      leds[5]=CRGB::Yellow;
      leds[6]=CRGB::Orange;
      leds[7]=CRGB::Red;
      FastLED.show();
    } else if (led_kombi==1) {
      leds[0]=CRGB::Red;
      leds[1]=CRGB::Orange;
      leds[2]=CRGB::Yellow;
      leds[3]=CRGB::Green;
      leds[4]=CRGB::Cyan;
      leds[5]=CRGB::Blue;
      leds[6]=CRGB::Magenta;
      leds[7]=CRGB::Magenta;
      FastLED.show();
    } else {
      leds[0]=CRGB::Black;
      leds[1]=CRGB::Black;
      leds[2]=CRGB::Black;
      leds[3]=CRGB::Black;
      leds[4]=CRGB::Black;
      leds[5]=CRGB::Black;
      leds[6]=CRGB::Black;
      leds[7]=CRGB::Black;
      FastLED.show();
    }

    delay(500);
  }
  button_war = button_ist;
}
