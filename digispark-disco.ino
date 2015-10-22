// Based on NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
#include <Adafruit_NeoPixel.h>

#define PIN            0 // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      1 // How many NeoPixels are attached to the Arduino?

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);
int delayval = 50; // delay for 50 millisecond

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
  //mySerial.begin(9600);
}

void loop() {
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for(int i=0;i<NUMPIXELS;i++){
    // pixels.Color takes GRB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,0)); 
    pixels.show(); // This sends the updated pixel color to the hardware.
    delay(delayval);// Delay for a period of time (in milliseconds).
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(delayval);
    pixels.setPixelColor(i, pixels.Color(0,255,0));
    pixels.show(); 
    delay(delayval); 
    pixels.setPixelColor(i, pixels.Color(0,0,255));
    pixels.show(); 
    delay(delayval);
    
  }
}
