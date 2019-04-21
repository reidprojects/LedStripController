# LedStripController
Arduino library to control LED strip over the standard board.

## Installation
To install this custom library, you must clone the repository and move it into your "Arduino/librairies" folder.

## Example
```ino
#include "LedStripController.h"

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
  led_channel_0.writeCommand(0xFF02FD);
  led_channel_1.writeCommand(0xFF02FD);
}
```

## Authors

* **Alex Reid** - *Initial work* - [reid418](https://github.com/reid418) - [Web Site](https://reid-projects.com)

See also the list of [contributors](https://github.com/reid418/LedStripController/graphs/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
