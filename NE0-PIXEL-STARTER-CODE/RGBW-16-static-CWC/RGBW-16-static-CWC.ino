// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()
// CW Coleman 170413

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
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;

void loop() {
//RED
  led = 0; red = 255; green = 0; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
 //GREEN 
  led = 1; red = 0; green = 255; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
//BLUE
  led = 2; red = 0; green = 0; blue = 255; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  //YELLOW
  led = 3; red = 255; green = 255; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  // CYAN
  led = 4; red = 0; green = 255; blue = 255; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
//MAGENTA
  led = 5; red = 255; green = 0; blue = 255; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
 //ORANGE
  led = 6; red = 255; green = 127; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
// ?
    led = 7; red = 0; green = 127; blue = 255; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
//
    led = 8; red = 127; green = 255; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 9; red = 63; green = 63; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 10; red = 0; green = 63; blue = 63; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 11; red = 0; green = 16; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 12; red = 0; green = 32; blue = 16; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 13; red = 0; green = 63; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
   led = 14; red = 255; green = 63; blue = 0; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);  
   strip.show();
  // WHITE
  led = 15; red = 255; green = 255; blue = 255; white = 20; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  for (int i = 16; i < 23; i++){
   led = i; red = 0; green = 255; blue = 0; white = 50; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  }
;
   
}


