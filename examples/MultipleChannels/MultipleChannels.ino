#include "LedStripController.h"
#include "44KeysCodes.h"

#define RGB_CHANNEL_0 2
#define RGB_CHANNEL_1 3

LedStripController led_channel_0;
LedStripController led_channel_1;

void setup() 
{
  // Initialise the output channels.
  led_channel_0.begin(RGB_CHANNEL_0);
  led_channel_1.begin(RGB_CHANNEL_1);
}

void loop() 
{
  // Write commands to the LED strip controller.
  led_channel_0.writeCommand(IR_ON);
  led_channel_0.writeCommand(IR_G);
  
  led_channel_1.writeCommand(IR_ON);
  led_channel_1.writeCommand(IR_R);
}