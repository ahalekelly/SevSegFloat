// Send a decimal number from the computer over Serial, and it appears on the display. No starting with decimal points, put a zero before it.
#include <SoftwareSerial.h>
#include <SevSegFloat.h> // Include the library
SoftwareSerial s7s(2, 3); // Set up a virtual serial port on pins 2 and 3
SevSegFloat SevSeg(s7s); // Make an instance of SevSegFloat on the s7s Stream called SevSeg
float printVal = 0.12345; // Value to print
void setup() {
  s7s.begin(9600);
  delay(100);
  SevSeg.send(printVal); // Print default value at the beginning
}
void loop() {
  //  printVal=30-millis()/1000.0; // Count down timer
  //*
  if (Serial.available()){ // If there's unread serial on the line
    printVal=Serial.parseFloat(); // Then parse it into a float
    Serial.println(printVal);
    if(printVal!=0) { //Throw away null values, which are quite common
      SevSegPrintFloat(printVal); // Send data
    }
  }
  //*/
}

