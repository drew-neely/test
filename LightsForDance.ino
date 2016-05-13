#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(15, PIN, NEO_GRB + NEO_KHZ800);

int half = strip.numPixels()/2;
int brightness = 255;
int l = half;

void setup(){
  strip.begin();
  strip.show();
  
  for(int n = half; n < strip.numPixels(); n++){
    delay(100);
    strip.setPixelColor(n, brightness, 0, 0);
    strip.show();
    strip.setPixelColor(l, brightness, 0, 0);
    strip.show();
    brightness -= 50;
    l--;
  }
}

void loop(){
  
}

