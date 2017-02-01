# Zubi Flyer Setup Instructions in 3 Steps: Download Arduino IDE, Install Required Libraries, Setup Zubi Flyer's Board, and then your ready to code the games!

To start coding Zubi Flyer, follow these instructions:

[Contact Support](fuzeplay.co) if you're running into any issues, we're happy to help you out!

## 1. Download the Arduino IDE
(This makes it easy to write and upload code to Zubi Flyer!)
[Arduino Logo](https://www.arduino.cc/en/pub/skins/arduinoWide/img/ArduinoAPP-01.svg)
  
  [Download the Arduino IDE for Windows](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-windows.zip) | [Download the Arduino IDE for Mac](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-macosx.zip)
  ------------ | -------------
  
 
## 2. Install Required Libraries
(A "Library" is a bunch of code that somebody else wrote that you can use!)
  
### First,
  1. Download Zubi Flyer's code library: [Zubi Flyer .ZIP Library](https://github.com/fuzeplay/zubi-flyer-games/raw/master/Fuze.zip)
  2. Open the Arduino IDE, and navigate to Sketch > Include Library. At the top of the drop down list, select the option to "Add .ZIP Library''.
  ![Import Library From Zip](https://www.arduino.cc/en/uploads/Guide/ImportLibraryFromZIPFile.png)
  3. Find Zubi Flyer's .ZIP library that you just downloaded to your computer and open it.
  ![Select Zubi Flyer .ZIP file](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/find_zip_file.png?raw=true)

  
### Second,
  
  1. In the Arduino IDE, open the *Library Manager* by navigating to Sketch > Include Library > Manage Libraries...
  ![Open Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/open_library_manager.png?raw=true)
  
  2. Use the search field to find and install the following libraries:
  ![Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/library_manager.png?raw=true)
  
    **FastLED**, Which is used to control LEDs on Zubi Flyer
    
    **Bounce2**, Which is used to [debounce](https://www.arduino.cc/en/Tutorial/Debounce) button inputs so Zubi Flyer can
    read your input properly (basically, this makes Zubi Flyer work the right way!).

    **EnableInterrupt**, Which is used to handle button [interrupts](https://www.arduino.cc/en/Reference/Interrupts) for some of the Zubi Flyer's menu buttons (also makes Zubi Flyer work the right way!).
    
  3. Once you've installed these libraries, you should see them listed below *Contributed Libraries* when you navigate to Sketch > Include Library
  
  For more details on how to install Libraries, check out [Arduino's official guide](https://www.arduino.cc/en/Guide/Libraries).

## 3. Setup Zubi Flyer's Adafruit Trinket Board
  
Confirm that your Arduino IDE lets you set the **Pro Trinket 5V / 16MHz (USB)** as your board by selecting **Tools** and then **Board**.  You should see the option to select **Pro Trinket 5V / 16MHz (USB)**.
  
  ![Pro Trinket is Present](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/adafruit-board-present.png?raw=true)
  If the **Pro Trinket 5V / 16MHz (USB)** option is there, please skip step **3.a** and go straight to **3.b**
  
  ![Pro Trinket is not present](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/no_adafruit_board.png)
  If the **Pro Trinket 5V / 16MHz (USB)** option is **not** there, please complete step **3.a** and then go to step **3.b**

### 3.a Install Adafruit Trinket Board

  1. Set the *Additional Boards Manager URL*
  
  ![Preferences](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/select-preferences.png?raw=true)
  
  On Windows, go the the *File* Menu and select *Preferences*
  
  On Mac, go to *Arduino* and then then *Preferences*
 
  ![Preferences Additional Boards Manager URLs](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/settings-additional-boards.png?raw=true)
  
  Paste `https://adafruit.github.io/arduino-board-index/package_adafruit_index.json` into the *additional Boards Manager URLs* box and then press OK
  2. Open the Boards Manager

  ![Open Boards Manager](  https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/select-board-manager-menu.png?raw=true)
  
  On Windows, go the the *File* Menu and select *Preferences*
  
  On Mac, go to *Arduino* and then then *Preferences*
  
  ![Boards Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/boards-manager.png?raw=true)
  
  *Install* version 1.4.9 of the **Adafruit AVR Boards** by **Adafruit**

### 3.b Install Adafruit Trinket Drivers
### Install the Drivers on Windows
  If you are using Windows, you will need to install the Arduino drivers. After you've completed the above steps, just connect Zubi Flyer to your computer using the micro USB.
  
  ![Windows Drivers install box](https://i.stack.imgur.com/7vMay.png)
  
  Wait until Windows finished installing the drivers before moving on to the next step. 
  
  If you are having issues with Windows recognizing your drivers, please make sure that you correctly installed the required drivers by also installing the drivers [directly from Adafruit](https://learn.adafruit.com/usbtinyisp/drivers).  
  
  If you are on Windows 8, you might need to follow [additional installation steps](http://mytechblog.com/tutorials/arduino/install-arduino-drivers-on-windows-8/) to securely install the Drivers.

### Install the Drivers on Mac
  You don't have to do anything, Mac already has the drivers installed!

## 4. Now you're ready to code your first game!
 Since the Zubi Flyer Games are open sourced, you can freely modify and change the game's source code. If you want in-depth instructions on how to write Arduino code, then please read their [Official Getting Started Guide](https://www.arduino.cc/en/Guide/HomePage). In this short tutorial, we're going to explain how to change the [Newbie Zubi game](https://github.com/fuzeplay/zubi-flyer-games/blob/master/newbie_zubi/newbie_zubi.ino)code!
  
  First, open the Arduino IDE and open a copy of the Newbie Zubi source code by going to: File > Examples > Fuze > newbie_zubi.
  
  At the top of the source code, you should see a section named **User modifiable values**. These are variables that you can easily modify to change the games!
  ```
//Newbie-Zubi
//Written by Jordan Rejaud for FUZE
#include <FastLED.h>
#include <Bounce2.h>

//Don't modify these, but they need to be defined before the button sequences
#define TRIANGLE_PUSH 1
#define SQUARE_PUSH 2
#define CIRCLE_PUSH 3
//******************************************************************************
// User modifiable values
//******************************************************************************
//These are the button sequences that you need to push in order to trigger the lights show!
//For example, if you want to trigger "Magellan's Envy", you need to push the square button,
//then the circle button, then the triangle button

//You also need to set the length variable for each sequence equal to the number of button pushes in each sequence
const int MAGELLAN_ENVY[] = {SQUARE_PUSH, CIRCLE_PUSH, TRIANGLE_PUSH};
#define MAGELLAN_ENVY_LENGTH 3
const int ROLLING_ORANGES[] = {TRIANGLE_PUSH, SQUARE_PUSH, CIRCLE_PUSH};
#define ROLLING_ORANGES_LENGTH 3
const int UNICORN_SPARKLE[] = {CIRCLE_PUSH, SQUARE_PUSH, TRIANGLE_PUSH, SQUARE_PUSH};
#define UNICORN_SPARKLE_LENGTH 4
const int FIESTA_GRANDE[] = {CIRCLE_PUSH, SQUARE_PUSH, TRIANGLE_PUSH, TRIANGLE_PUSH, SQUARE_PUSH, CIRCLE_PUSH};
#define FIESTA_GRANDE_LENGTH 6
```


You will see that to activate the Magellan's Envy Light Show, you need to enter the following sequence on your Zubi Flyer's Board: Square, Circle, Triangle.
```
const int MAGELLAN_ENVY[] = {SQUARE_PUSH, CIRCLE_PUSH, TRIANGLE_PUSH};
#define MAGELLAN_ENVY_LENGTH 3
```

Let's modify the sequence from Square, Circle, Triangle to Square, Circle, Triangle, Circle. Change the above lines of code to the following:
```
const int MAGELLAN_ENVY[] = {SQUARE_PUSH, CIRCLE_PUSH, TRIANGLE_PUSH, CIRCLE_PUSH}; //Square, Circle, Triangle, Circle
#define MAGELLAN_ENVY_LENGTH 4 //Remember to update the length of the sequence from 3 to 4 if you add a button push at the end
```

### Once you've written new code, you need to upload the changed Newbie Zubi game code to your Zubi Flyer Board:

1. Set board to **Pro Trinket 5V / 16MHz (USB)** (Tools > Board)
2. Set programmer to **USBTiny ISP** (Tools > Programmer)

3. Connect your Zubi Flyer Board to your laptop via a USB cable.

//Insert Image of cable connecting to board and laptop

4. IMPORTANT: Push the **reset** button on your Zubi Flyer Board (See Zubi flyer's instructable if you're not sure where the reset button is). The board will flash red for a few seconds. You can only upload new source code to the board when the light is flashing.  Every time you upload code to Zubi Flyer, you will have to push the "reset" button first.

//Insert Gif of light flashing

5.  Immediately after you push the **reset** button (while the red light is still flashing), push the **upload** button in the Arduino IDE to upload your new source code to the board.

![Arduino Upload Button](http://house4u.com.ua/photos/solar-controller/en/arduino-upload.gif)

If the upload worked correctly, you should see **Done Uploading** at the bottom of the Arduino IDE.

![Upload Done](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/upload_done.png?raw=true)

6. You can now disconnect Zubi Flyer's Board from your computer and play the modified Newbie Zubi Game :P

### To reset Zubi Flyer to factory settings:
Simply copy and past the code from Zubi Flyer's Zip. Library titled "Factory Install" into the Arduino IDE, push the "reset" button on Zubi Flyer's Board, and then click the "upload" button in the Arduino IDE.  Once the Factory Install code is done uploading, disconnect Zubi Flyer from your computer and go play!

  
