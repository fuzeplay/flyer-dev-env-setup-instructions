# Zubi Flyer Development Environment Setup Instructions

Hello there. If you want to start hacking with your Zubi Flyer board, please follow the following instructions.

[Contact Support](fuzeplay.co) if you're running into any issues, we'll be happy to help you out :)

## 1. Install the Arduino IDE
  ![Arduino Logo](https://www.arduino.cc/en/pub/skins/arduinoWide/img/ArduinoAPP-01.svg)
  
  The Zubi Flyer is built using [Arduino](https://www.arduino.cc/) hardware and software. 
  
  Arduino is a hardware and software platform for hobbyists and Engineers to make neat electronics projects.
  
  If you want to write and modify the Arduino code that controls your Zubi Flyer, you'll first need to install the Arduino IDE on your laptop. 
  
  An IDE is an "Integrated Development Enviroment" and is used by Computer Programmers to write/ modify code, and then turn that code into a computer program.
  
  [Download the Arduino IDE for Windows](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-windows.zip) | [Download the Arduino IDE for Mac](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-macosx.zip)
  ------------ | -------------
## 2. Install Required Libraries
  After you've installed the Arduino IDE, you'll need to install Fuze's Zubi Flyer Library and other Libraries that it requires. 
  
  In Computer Programming, a "Library" is code that somebody else wrote that you can copy and modify.
  
  For example, if you want to modify the [Newbie-Zubi](https://github.com/fuzeplay/zubi-flyer-games/blob/master/newbie_zubi/newbie_zubi.ino) game on your Zubi Flyer, you don't have to write the code for the entire game on your own, you would use the Newbie-Zubi code that we've already written and put in the Zubi Flyer Library. Similarly, the Zubi Flyer library uses the [FastLED](http://fastled.io/) library to control the LEDs (that's the flashing lights!) on the Zubi Flyer board.
  
  If you're curious, feel free to [read more](https://www.arduino.cc/en/Hacking/LibraryTutorial) about how Arduino Libraries work.
### 2.a Install the Zubi Flyer Libraries
  1. Download the [Zubi Flyer .ZIP Library]()
  2. Open the Arduino IDE, navigate to Sketch > Include Library. At the top of the drop down list, select the option to "Add .ZIP Library''.
  ![Import Library From Zip](https://www.arduino.cc/en/uploads/Guide/ImportLibraryFromZIPFile.png)
  3. Navigate to the Zubi Flyer .ZIP file's location and open it.
  ![Select Zubi Flyer .ZIP file](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/find_zip_file.png?raw=true)

  
### 2.b Install the other required libraries
  You can use the Arduino IDE's *Library Manager* to install the other required libraries, it's easier than installing via a zip file.
  
  1. Open the *Library Manager* by navigating to Sketch > Include Library > Manage Libraries...
  ![Open Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/open_library_manager.png?raw=true)
  
  2. Use the search field to find and install the following libraries:
  ![Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/library_manager.png?raw=true)
  
    **FastLED**, Which is used to control LEDs on the board
    
    **Bounce2**, Which is used to [debounce](https://www.arduino.cc/en/Tutorial/Debounce) button inputs so the board can
    read your input properly

    **EnableInterrupt**, Which is used to handle button [interrupts](https://www.arduino.cc/en/Reference/Interrupts) for some of the board's menu buttons.
    
  3. Once you've installed these libraries, you should see them listed below *Contributed Libraries* when you navigate to Sketch > Include Library
  
  For more details on how to install Libraries, please check out [Arduino's official guide](https://www.arduino.cc/en/Guide/Libraries).

## 3. Setup Adafruit Trinket Board

  The Zubi Flyer is built using the [Adafruit Trinket](https://www.adafruit.com/product/2000) board, so you'll need to make sure that your Arduino IDE and computer are setup properly to program this board.
  
  First, you'll need to confirm that your Arduino IDE lets you set the **Pro Trinket 5V / 16MHz (USB)** as your board. If you installed the Arduino IDE correctly from step one, Selecting **Tools** and then **Board** should provide you with the option to choose **Pro Trinket 5V / 16MHz (USB)**.
  
  ![Pro Trinket is Present](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/adafruit-board-present.png?raw=true)
  If the **Pro Trinket 5V / 16MHz (USB)** option is there, please skip step **3.a** and go straight to **3.b**
  
  ![Pro Trinket is not present](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/no_adafruit_board.png)
  If the **Pro Trinket 5V / 16MHz (USB)** option is **not** there, please complete step **3.a** and then go to step **3.b**

### 3.a Install Adafruit Trinket Board

  1. First, you'll need to set the *Additional Boards Manager URL*
  
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

  A "Driver" is software that lets different hardware talk to each other.
  
  If you plug your mouse into a laptop, your laptop has Drivers that tell the laptop what kind of mouse it is and how to understand mouse movements and turn those into the cursor moving on your screen.
   
### Install the Drivers on Windows
  Coming Soon
### Install the Drivers on Mac
  :smile: You don't have to do anything, Mac already has the drivers installed

## 4. Modify your first game!
  After you've played with the games on your Zubi board for a while, you might want to learn how to modify the games. Since the Zubi Flyer Games are open sourced, you can freely modify and change the game's source code. If you want in-depth instructions on how to write Arduino code, then please read their [Official Getting Started Guide](https://www.arduino.cc/en/Guide/HomePage). In this short tutorial, we're going to explain how to modify the [Newbie Zubi game](https://github.com/fuzeplay/zubi-flyer-games/blob/master/newbie_zubi/newbie_zubi.ino).
  
  First, open the Arduino IDE and open a copy of the Newbie Zubi source code by going to: File > Examples > XXXX (To be specified later).
  
  At the top of the source code, you should see a section named **User modifiable values**. These are variables that you can modify to change the game without going too deeply into the underlying logic.
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


You will see that to trigger the Magellan's Envy Light Show, you need to enter the following sequence on your board: Square Button, Circle Button, Triangle Button.
```
const int MAGELLAN_ENVY[] = {SQUARE_PUSH, CIRCLE_PUSH, TRIANGLE_PUSH};
#define MAGELLAN_ENVY_LENGTH 3
```

Let's modify the sequence from Square, Circle, Triangle to Square, Circle, Triangle, Circle. Change the above line of code to the following:
```
const int MAGELLAN_ENVY[] = {SQUARE_PUSH, CIRCLE_PUSH, TRIANGLE_PUSH, CIRCLE_PUSH}; //Square, Circle, Triangle, Circle
#define MAGELLAN_ENVY_LENGTH 4 //Remember to update the length of the sequence from 3 to 4 if you add a button push at the end
```

Finally, you need to upload this changed Newbie Zubi source code to your board.

Set board to **Pro Trinket 5V / 16MHz (USB)** (Tools > Board)
Set programmer to **USBTiny ISP** (Tools > Programmer)

Connect your Zubi Flyer Board to your laptop via a USB cable.
//Insert Image of cable connecting to board and laptop

Hit the **reset** button on your Zubi Flyer Board. The board will flash red for a few seconds. You can only upload new source code to the board when the light is flashing.
//Insert Gif of light flashing

Right after you push the **reset** button (while the red light is still flashing), push the **upload** button in the Arduino IDE to upload your new source code to the board.

![Arduino Upload Button](http://house4u.com.ua/photos/solar-controller/en/arduino-upload.gif)

If the upload worked correctly, you should see **Done Uploading** at the bottom of the Arduino IDE.

![Upload Done](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/upload_done.png?raw=true)

You can now disconnect your board from your computer and play the modified Newbie Zubi Game :P

  
