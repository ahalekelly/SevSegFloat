// Resource intensive, somewhat buggy, should work on any board, allows many serial ports
#include <SoftwareSerial.h> // This used to be called NewSoftSerial until 1.0, so if you're using an old version you need to change this
#include <SevSegFloat.h> 
SoftwareSerial s7s(2, 3); // Start a virtual serial port on pins 2 and 3
SevSegFloat SevSeg(s7s); // Make an instance of SevSegFloat on the s7s Stream called SevSeg
float printVal = 0.12345; // The value to print
void setup() {
  s7s.begin(9600); // Initiate serial
}
void loop() {
  SevSeg.send(printVal); // Send data
  delay(100); // Seems to be necessary for SoftwareSerial, it's a lot more buggy wihtout the delay
}
