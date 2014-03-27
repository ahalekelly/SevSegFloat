#include "SevSegFloat.h"

void SevSegFloat::send(float _num) {
  _place=0;
  _error=0;
  if ((1 <= _num && _num < 1000) || (-100 < _num && _num <= -1)) {
    while ((1 <= _num && _num < 1000) || (-100 < _num && _num <= -1)) { // Medium Numbers
      _place++;
      _num*=10;
    }
  }
  else if ((1000 <= _num && _num < 10000) || (-1000 < _num && _num <= -100)) { // 4 Digit Number
  }
  else if (_num > -1 && _num < 1) { //Small Numbers
    _place=3;
    _num*=1000;
  }
  else if (_num >= 10000) {
    serial.print("OUEr");
    _error=1;
    _place=10;
  }
  else if (_num <= -1000) {
    serial.print("Undr");
    _error=1;
    _place=10;
  }
  else {
    serial.print("Eror");
    _error=1;
    _place=10;
  }

  if (_error==0) {
    // Output over Serial
    serial.write((byte)121);
    serial.write((byte)0);
    sprintf(_outString, "%04d", round(_num));
    serial.print(_outString);
  }

  // Which Decimal Point to Light
  _decimalPoint = 0;
  bitSet(_decimalPoint, 3 - _place);

  // Debugging
  /*
  Serial.print(_num, 3);
  Serial.print(" ");
  Serial.print(_place);
  Serial.print(" ");
  Serial.println(_outString);
  //*/

  // Output to Display
  serial.write((byte)119);
  serial.write(_decimalPoint);
}
