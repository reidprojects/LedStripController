#include "LedStripController.h"


LedStripController::LedStripController(uint8_t pinNumber)
{
  this->begin(pinNumber);
}

LedStripController::LedStripController()
{
}

void LedStripController::begin(uint8_t pinNumber)
{
  this->pinNumber = pinNumber;
  pinMode(this->pinNumber, OUTPUT);
  digitalWrite(this->pinNumber, HIGH); 
}


void LedStripController::writeCommand(long command)
//*****************************************************************************
// This function will send a 32bits command the same under the format
// that the IR receiver expects it.
//
//
//*****************************************************************************
{
  digitalWrite(this->pinNumber, LOW);
  delayMicroseconds(9200);
  digitalWrite(this->pinNumber, HIGH);
  delayMicroseconds(4500);
  this->writeByte(command >> 24);
  this->writeByte(command >> 16);
  this->writeByte(command >> 8);
  this->writeByte(command);
  digitalWrite(this->pinNumber, LOW);
  delayMicroseconds(550);
  digitalWrite(this->pinNumber, HIGH);
}

void LedStripController::writeLogical0(void)
{
  digitalWrite(this->pinNumber, LOW);
  delayMicroseconds(550);
  digitalWrite(this->pinNumber, HIGH);
  delayMicroseconds(1690);
}

void LedStripController::writeLogical1(void)
{
  digitalWrite(this->pinNumber, LOW);
  delayMicroseconds(550);
  digitalWrite(this->pinNumber, HIGH);
  delayMicroseconds(550);
}

void LedStripController::writeByte(uint8_t byte_to_send)
{
    for (int i=0; i<8; i++) 
    { 
      if (((byte_to_send << i) & 0x80) == 0x80)
      {
        this->writeLogical1(); 
      }
      else
      {
        this->writeLogical0(); 
      }
  }
}
