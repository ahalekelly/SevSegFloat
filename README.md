#SevSegFloat
##An Arduino Library that Formats Floats for Seven Segment Serial Displays

I was frustrated with the existing libraries for the [Sparkfun SevSeg Serial Displays](https://www.sparkfun.com/products/11441), so I hacked my first library together in a day. Right now it works for numbers between 9999 and -999, and I'm planning on expanding it to 1E999 and -1E99.

It was originally written on the Teensy 3.1, has been tested on a Leonardo and should work on any Arduino compatible board. It works with Serial, SoftwareSerial or HardwareSerial,. It's really quite simple to use, the code for the Leonardo could be pared down to just 9 lines.

Please let me know how it works and if you have any problems!

