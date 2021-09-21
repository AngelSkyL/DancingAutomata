#include <Servo.h>
Servo myServo;
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
#define PSTR // Make Arduino Due happy
#endif
#define PIN 3
#define LED_COUNT 64
int E1 = 5;     //M1 Speed Control
int E2 = 6;     //M2 Speed Control
int M1 = 4;    //M1 Direction Control
int M2 = 7;    //M1 Direction Control
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, PIN,
                            NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
                            NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
                            NEO_GRB            + NEO_KHZ800);
Adafruit_NeoPixel strip(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);
// the setup function runs once when you press reset or power the board


void setup() {
  myServo.attach(11); // Attach to the servo on pin 11
  // initialize pins for the motor driver
  int i;
  for (i = 4; i <= 7; i++)
    pinMode(i, OUTPUT);
  matrix.begin();
  matrix.setBrightness(40);
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
  
  //beginning color show
  theaterChase(strip.Color(127, 127, 127), 100); // White, half brightness
  theaterChase(strip.Color(201, 64, 120), 100); // White, half brightness
  theaterChaseRainbow(45);
  colorWipe(strip.Color(102,   81,   186), 30);
  colorWipe(strip.Color(247,   63,   161), 35);
  colorWipe(strip.Color(37,   73,   220), 40);


  // goes forward for one measure with pink lights
  matrix.drawPixel(2, 5, matrix.Color(236, 66, 162));
  matrix.drawPixel(2, 2, matrix.Color(236, 66, 162));
  matrix.drawPixel(4, 5, matrix.Color(236, 66, 162));
  matrix.drawPixel(5, 2, matrix.Color(236, 66, 162));
  matrix.drawPixel(5, 4, matrix.Color(236, 66, 162));
  matrix.drawPixel(5, 3, matrix.Color(236, 66, 162));
  matrix.drawPixel(5, 5, matrix.Color(236, 66, 162));
  matrix.drawPixel(4, 2, matrix.Color(236, 66, 162));
  matrix.show();
  delay(0);
  
  advance(200, 200);
  delay(100);
  myServo.write(90);
  delay(100)
  stop();
  delay(450);

  advance(200, 200);
  delay(100);
  myServo.write(0)
  delay(100);
  stop();
  delay(450);

  advance(200, 200);
  delay(100);
  myServo.write(90);
  delay(100)
  stop();
  delay(450);


  advance(200, 200);
  delay(100);
  myServo.write(0)
  delay(100);
  stop();
  delay(450);

  // goes forward another measure with red lights
  matrix.drawPixel(2, 5, matrix.Color(205, 0, 0));
  matrix.drawPixel(2, 2, matrix.Color(205, 0, 0));
  matrix.drawPixel(4, 5, matrix.Color(205, 0, 0));
  matrix.drawPixel(5, 2, matrix.Color(205, 0, 0));
  matrix.drawPixel(5, 4, matrix.Color(205, 0, 0));
  matrix.drawPixel(5, 3, matrix.Color(205, 0, 0));
  matrix.drawPixel(5, 5, matrix.Color(205, 0, 0));
  matrix.drawPixel(4, 2, matrix.Color(205, 0, 0));
  matrix.show();
  delay(0);
  
  advance(200, 200);
  delay(100);
  stop();
  delay(450);
  
  advance(200, 200);
  delay(100);
  stop();
  delay(450);
  
  advance(200, 200);
  delay(100);
  stop();
  delay(450);
  
  advance(200, 200);
  delay(100);
  stop();
  delay(450);

  // left semi circle with lighter red lights
  matrix.drawPixel(2, 5, matrix.Color(155, 0, 0));
  matrix.drawPixel(2, 2, matrix.Color(155, 0, 0));
  matrix.drawPixel(4, 5, matrix.Color(155, 0, 0));
  matrix.drawPixel(5, 2, matrix.Color(155, 0, 0));
  matrix.drawPixel(5, 4, matrix.Color(155, 0, 0));
  matrix.drawPixel(5, 3, matrix.Color(155, 0, 0));
  matrix.drawPixel(5, 5, matrix.Color(155, 0, 0));
  matrix.drawPixel(4, 2, matrix.Color(155, 0, 0));
  matrix.show();
  delay(0);
  
  advance(100, 250);
  delay(100);
  stop();
  delay(450);
  
  advance(100, 250);
  delay(100);
  stop();
  delay(450);
  
  advance(100, 250);
  delay(100);
  stop();
  delay(450);
  
  advance(100, 250);
  delay(100);
  stop();
  delay(450);

  // right semi circle mabob with blue lights
  matrix.drawPixel(2, 5, matrix.Color(14, 56, 195));
  matrix.drawPixel(2, 2, matrix.Color(14, 56, 195));
  matrix.drawPixel(4, 5, matrix.Color(14, 56, 195));
  matrix.drawPixel(5, 2, matrix.Color(14, 56, 195));
  matrix.drawPixel(5, 4, matrix.Color(14, 56, 195));
  matrix.drawPixel(5, 3, matrix.Color(14, 56, 195));
  matrix.drawPixel(5, 5, matrix.Color(14, 56, 195));
  matrix.drawPixel(4, 2, matrix.Color(14, 56, 195));
  matrix.show();
  delay(0);
  advance (150, 50);
  delay (2000);
  stop();
  delay (450);

  //charlie brown!!!!!!!!!!!!!
  matrix.drawPixel(2, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(2, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 4, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 3, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 2, matrix.Color(245, 24, 68));
  matrix.show();
  delay(0);
  advance(200, 200);
  delay(100);
  stop();
  delay(450);
  
  //backwards one
  matrix.drawPixel(2, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(2, 2, matrix.Color(166, 18, 47));
  matrix.drawPixel(4, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 2, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 4, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 3, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(4, 2, matrix.Color(166, 18, 47));
  matrix.show();
  delay(0);
  back_off (200, 200);
  delay(100);
  stop();
  delay(450);

  // front again
  matrix.drawPixel(2, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(2, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 4, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 3, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 2, matrix.Color(245, 24, 68));
  matrix.show();
  delay(0);
  
  advance(200, 200);
  delay(600);
  stop();
  delay(450);
  
  advance(200, 200);
  delay(100);
  stop();
  delay(450);
  
  //  back again
  matrix.drawPixel(2, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(2, 2, matrix.Color(166, 18, 47));
  matrix.drawPixel(4, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 2, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 4, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 3, matrix.Color(166, 18, 47));
  matrix.drawPixel(5, 5, matrix.Color(166, 18, 47));
  matrix.drawPixel(4, 2, matrix.Color(166, 18, 47));
  matrix.show();
  delay(0);
  
  back_off(200, 200);
  delay(100);
  stop();
  delay(450);

// forward
  matrix.drawPixel(2, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(2, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 2, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 4, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 3, matrix.Color(245, 24, 68));
  matrix.drawPixel(5, 5, matrix.Color(245, 24, 68));
  matrix.drawPixel(4, 2, matrix.Color(245, 24, 68));
  matrix.show();
  delay(0);
  
  advance(200, 200);
  delay(800);
  stop();
  delay(450);
  
  //circle
  matrix.drawPixel(2, 5, matrix.Color(255, 153, 204));
  matrix.drawPixel(2, 2, matrix.Color(255, 153, 204));
  matrix.drawPixel(4, 5, matrix.Color(255, 153, 204));
  matrix.drawPixel(5, 2, matrix.Color(255, 153, 204));
  matrix.drawPixel(5, 4, matrix.Color(255, 153, 204));
  matrix.drawPixel(5, 3, matrix.Color(255, 153, 204));
  matrix.drawPixel(5, 5, matrix.Color(255, 153, 204));
  matrix.drawPixel(4, 2, matrix.Color(255, 153, 204));
  matrix.show();
  delay(0);
  
  advance (150, 50);
  delay (6000);
  stop();
  delay (450);
  
  //lights
  matrix.fillScreen(0);
  matrix.drawPixel(2, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(2, 2, matrix.Color(0, 255, 0));
  matrix.drawPixel(4, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 2, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 4, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 3, matrix.Color(0, 255, 0));
  matrix.drawPixel(5, 5, matrix.Color(0, 255, 0));
  matrix.drawPixel(4, 2, matrix.Color(0, 255, 0));
  matrix.show();
  delay(250);
}
//lights
int x    = matrix.width();
int pass = 0;
void loop() {
}
// the loop function runs over and over again forever
//void loop() {
//    dance1();
//    //  analogWrite(E1, 0);    // turn the LED off by making the voltage LOW
//    delay(1000);                       // wait for a second
//
//    dance2();
//    delay(1000);                       // wait for a second
//}
//program functions with parameters, from https://wiki.dfrobot.com/Romeo_V2-All_in_one_Controller__R3___SKU_DFR0225_
void stop(void)                    //Stop
{
  digitalWrite(E1, LOW);
  digitalWrite(E2, LOW);
}
void advance(char a, char b)         //Move forward
{
  analogWrite (E1, a);     //PWM Speed Control
  digitalWrite(M1, HIGH);
  analogWrite (E2, b);
  digitalWrite(M2, HIGH);
}
void back_off (char a, char b)         //Move backward
{
  analogWrite (E1, a);
  digitalWrite(M1, LOW);
  analogWrite (E2, b);
  digitalWrite(M2, LOW);
}
void turn_L (char a, char b)            //Turn Left
{
  analogWrite (E1, a);
  digitalWrite(M1, LOW);
  analogWrite (E2, b);
  digitalWrite(M2, HIGH);
}
void turn_R (char a, char b)            //Turn Right
{
  analogWrite (E1, a);
  digitalWrite(M1, HIGH);
  analogWrite (E2, b);
  digitalWrite(M2, LOW);
}
/* Here you can add your own functions */
void dance1() {
  analogWrite(E1, 240);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(M1, LOW);
  delay(1000) ;                      // wait for a second
  digitalWrite(M1, HIGH);
  delay(1000) ;
  analogWrite(E1, 0);   // turn the LED on (HIGH is the voltage level)
}
void dance2() {
  analogWrite(E1, 120);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(M1, LOW);
  delay(1000) ;                      // wait for a second
  digitalWrite(M1, HIGH);
  delay(1000) ;
  analogWrite(E1, 0);   // turn the LED on (HIGH is the voltage level)
}
void colorWipe(uint32_t color, int wait) {
  for (int i = 0; i < strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);         //  Pause for a moment
  }
}
void theaterChase(uint32_t color, int wait) {
  for (int a = 0; a < 10; a++) { // Repeat 10 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for (int c = b; c < strip.numPixels(); c += 3) {
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}
void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     // First pixel starts at red (hue 0)
  for (int a = 0; a < 30; a++) { // Repeat 30 times...
    for (int b = 0; b < 3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in increments of 3...
      for (int c = b; c < strip.numPixels(); c += 3) {
        // hue of pixel 'c' is offset by an amount to make one full
        // revolution of the color wheel (range 65536) along the length
        // of the strip (strip.numPixels() steps):
        int      hue   = firstPixelHue + c * 65536L / strip.numPixels();
        uint32_t color = strip.gamma32(strip.ColorHSV(hue)); // hue -> RGB
        strip.setPixelColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show();                // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}
