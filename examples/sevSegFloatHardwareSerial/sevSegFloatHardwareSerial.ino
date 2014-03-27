// For the Teensy boards. Connect to pin 1 on Teensy 3, pin 8 on Teensy 2.0, pin 3 on Teensy 2.0++
#include <SevSegFloat.h> // Include the library
HardwareSerial s7s = HardwareSerial(); // Make an instance of HardwareSerial called s7s
SevSeg SevSegFloat(s7s);  // Make an instance of SevSegFloat on the s7s Stream called SevSeg
float printVal = 0.12345;  // The value to print
void setup() {
  s7s.begin(9600); // Initiate Serial connection
}
void loop() {
  SevSeg.send(printVal); // Send data
  delay(100); // Don't overload the display, not really necessary
}
