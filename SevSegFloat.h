#ifndef SevSegFloat_H
#define SevSegFloat_H
#include "Arduino.h"

class SevSegFloat {
public:
  SevSegFloat(Stream& s):serial(s){}
  void send(float _num);
private:
  Stream& serial;
  float _num;
  byte _place;
  char _outString[5];
  byte _decimalPoint;
  bool _error;
};

#endif
