// RGBW (Red Green Blue White Neo-Pixel starter function 
// CW Coleman 181214 a
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6
#define NUM_LEDS 16
#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
// global vaiables
int led, red, green, blue, white;
int wait = 100;
int count = 0;
void loop() {
  red = 255;  green = 0; blue = 255; white = 10; led = 16;
  if (count = 0) neo_black(0,0,0,0,16);
  neo_function(red, green, blue, white, led); 
  
}
int l = 0 ;
void neo_function (int r, int g, int b, int w, int led ){
    wait = 100;
    strip.setPixelColor(l, r, g , b, w);
    strip.show();
    delay(wait);
    r = r + 8;
    g = g + 1;
    b = b + 25;
    w = w + 1;

    Serial.print(" COLOR VALUES:  r = ");
    Serial.print(r);
    Serial.print(" led = ");
    Serial.println(l);

    if (r > 255) r = 0;
    if (g > 255) g = 0;
    if (b > 255) b = 0;
    if (w > 10) w = 0;
       
    if (r < 0) r = 255;
    if (g  < 0) g = 255;
    if (b < 0) b = 255;
    if (w  < 0 ) w = 10;
     l= l + 1;
    if (l > (led-1)) l = 0;



}

void neo_black (int r, int g, int b, int w, int led ){
    //n is the led
    for (int n = 0; n < led;n++){
      strip.setPixelColor(n, r, g , b, w);
      strip.show();
    }

Serial.print(" COLOR VALUES ");
Serial.println(r);

}
