// For the Arduino Uno and other Atmega328 based boards
#include <SevSegFloat.h> // Include the library
SevSegFloat SevSeg(Serial); // Make an instance of SevSegFloat on the Serial Stream called SevSeg
float printVal = 0.12345; // The value to print
void setup() {
  Serial.begin(9600); // Initiate Serial connection
}
void loop() {
  SevSeg.send(printVal); // Send data
  delay(100); // Don't overload the display, not really necessary
}
