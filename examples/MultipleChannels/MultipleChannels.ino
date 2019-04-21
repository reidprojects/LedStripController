#include "LedStripController.h"

#define RGB_CHANNEL_0 2
#define RGB_CHANNEL_1 2

LedStripController led_channel_0;
LedStripController led_channel_1;

void setup() 
{
  led_channel_0.begin(RGB_CHANNEL_0);
  led_channel_1.begin(RGB_CHANNEL_1);
}

void loop() 
{
  led_channel_0.writeCommand(0xFF02FD);
  led_channel_1.writeCommand(0xFF02FD);
}