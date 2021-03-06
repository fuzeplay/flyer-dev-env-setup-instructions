# Zubi Flyer Setup Instructions in 3 Steps
## Download Arduino IDE, Install Required Libraries, Setup Zubi Flyer's Board, and then you're ready to code the games!

To start coding the Zubi Flyer, follow these instructions:

[Contact Support](fuzeplay.co) if you're running into any issues, we're happy to help you out!

## 1. Download the Arduino IDE
(This makes it easy to write and upload code to the Zubi Flyer!)

  [Download the Arduino IDE for Windows](https://www.arduino.cc/download_handler.php?f=/arduino-1.8.2-windows.exe) | [Download the Arduino IDE for Mac](https://www.arduino.cc/download_handler.php?f=/arduino-1.8.2-macosx.zip)
  ------------ | -------------


## 2. Install Required Libraries
(A "Library" is a bunch of code that somebody else wrote that you can use!)

### First,
  1. Download Zubi Flyer's code library: [Zubi Flyer .ZIP Library](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/raw/master/Fuze.zip)
  2. Open the Arduino IDE, and navigate to Sketch > Include Library. At the top of the drop down list, select the option to "Add .ZIP Library''.
  ![Import Library From Zip](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_include_libraries_cropped.png?raw=true)
  3. Find Zubi Flyer's .ZIP library that you just downloaded to your computer and open it.
  ![Select Zubi Flyer .ZIP file](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/find_zip_file.png?raw=true)


### Second,

  1. In the Arduino IDE, open the *Library Manager* by navigating to Sketch > Include Library > Manage Libraries...
  ![Open Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/raw/master/images/select_manage_libraries_cropped.png?raw=true)

  2. Use the search field to find and install the following libraries:
  ![Library Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/library_manager.png?raw=true)
  
&nbsp;&nbsp;&nbsp;**FastLED**, Which is used to control LEDs on Zubi Flyer

&nbsp;&nbsp;&nbsp;**Bounce2**, Which is used to [debounce](https://www.arduino.cc/en/Tutorial/Debounce) button inputs so Zubi Flyer can
    read your input properly (basically, this makes Zubi Flyer work the right way!).

&nbsp;&nbsp;&nbsp;**EnableInterrupt**, Which is used to handle button [interrupts](https://www.arduino.cc/en/Reference/Interrupts) for some of the Zubi Flyer's menu buttons (also makes Zubi Flyer work the right way!).

  3. Once you've installed these libraries, you should see them listed below *Contributed Libraries* when you navigate to Sketch > Include Library

  For more details on how to install Libraries, check out [Arduino's official guide](https://www.arduino.cc/en/Guide/Libraries).

## 3. Install Zubi Flyer Board

  1. Set the *Additional Boards Manager URL*

  ![Preferences](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_preferences_cropped.png?raw=true)

  On Windows, go the the *File* Menu and select *Preferences*

  On Mac, go to *Arduino* and then then *Preferences*

  ![Preferences Additional Boards Manager URLs](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/preferences.png?raw=true)

  Paste `https://raw.githubusercontent.com/fuzeplay/flyer-dev-env-setup-instructions/master/package_fuze_index.json` into the *additional Boards Manager URLs* box and then press OK

  2. Open the Boards Manager

  ![Open Boards Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_boards_manager_cropped.png?raw=true)

  Naviate to *Tools* > *Board* > *Board Manager*

  ![Boards Manager](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/boards_manager.png?raw=true)

  Search for "Fuze" in the Boards Manager and *Install* the **FuzePlay Zubi Flyer** by **FuzePlay**

  3. Confirm that your Arduino IDE lets you set the **FuzePlay Zubi Flyer** as your board by selecting **Tools** and then **Board**.  You should see the option to select **FuzePlay Zubi Flyer**.
  
  
  ![Select FuzePlay Zubi Flyer](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_zubi_flyer_board.png?raw=true)

## 4. Install Zubi Flyer Drivers
### Install the Drivers on Windows
  If you are using Windows, you will need to install the Arduino drivers.

  ![Windows Drivers dialog](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/windows_driver.png?raw=true)

  Since the Zubi Flyer is based on the [Sparkfun Pro Micro Board](https://www.sparkfun.com/products/12640), you'll need to follow the **Windows Driver Installation** part of [their instructions](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/installing-windows) to setup the drivers.

  If you are on Windows 8, you might need to follow [additional installation steps](http://mytechblog.com/tutorials/arduino/install-arduino-drivers-on-windows-8/) to securely install the Drivers.

### Install the Drivers on Mac
  You don't have to do anything, Mac already has the drivers installed.

## 5. Now you're ready to code your first game!
 Since the Zubi Flyer Games are open sourced, you can freely modify and change the game's source code.

 If you want in-depth instructions on how to write Arduino code, then please read their [Official Getting Started Guide](https://www.arduino.cc/en/Guide/HomePage).

 In this short tutorial, we're going to explain how to change the [Newbie Zubi game](https://github.com/fuzeplay/zubi-flyer-games/blob/master/newbie_zubi/newbie_zubi.ino) code!

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

1. Set board to **FuzePlay Zubi Flyer** (Tools > Board)
2. Set programmer to **USBTiny ISP** (Tools > Programmer)

3. Connect your Zubi Flyer Board to your laptop via a Micro-USB cable.

//Insert Image of cable connecting to board and laptop

4.  Push the **upload** button in the Arduino IDE to upload your new source code to the board.

![Arduino Upload Button](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/upload.png?raw=true)

If the upload worked correctly, you should see **Done Uploading** at the bottom of the Arduino IDE.

![Upload Done](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/upload_done.png?raw=true)

6. You can now disconnect Zubi Flyer's Board from your computer and play the modified Newbie Zubi Game :P

### To reset Zubi Flyer to factory settings:
Open a new copy of the Zubi Flyer's factory default code by going to File > Examples > Fuze > factory.
Click the "upload" button in the Arduino IDE.  
Once the factory default code is done uploading, disconnect Zubi Flyer from your computer and go play!
