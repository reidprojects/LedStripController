/* 
   LedStripController library
   MIT license
   written by Alex Reid
*/

#ifndef LedStripController_h
#define LedStripController_h

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif


class LedStripController
{
  public:
    LedStripController();
    LedStripController(uint8_t);
    void writeCommand(long);
    void begin(uint8_t);

  private:
    int pinNumber;
    void writeLogical0(void);
    void writeLogical1(void);
    void writeByte(uint8_t);
};

#endif

