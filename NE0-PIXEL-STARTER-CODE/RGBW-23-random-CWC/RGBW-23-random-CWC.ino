// RGBW (Red Green Blue White Neo-Pixel starter code
// 23 LEDS with no loop inside of void loop()
// CW Coleman 180626

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 23

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  randomSeed(analogRead(0));
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 500;

void loop() {

  
  for (int i = 0; i < 23; i++){
    red  = random(0, 255);
    green = random(0, 255);
    blue = random(0, 255);
    white = random(0, 50);
    led = i; 
    strip.setPixelColor(led, red, green , blue, white);
    delay(wait);
    strip.show();
  }
;
   
}


