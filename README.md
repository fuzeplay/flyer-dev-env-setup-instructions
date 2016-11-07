# Zubi Flyer Development Environment Setup Instructions

Hello there. If you want to start hacking with your Zubi Flyer board, please follow the following instructions.

[Contact Support](fuzeplay.co) if you're running into any issues, we'll be happy to help you out :)

## 1. Install the Arduino IDE
  ![Arduino Logo](https://www.arduino.cc/en/pub/skins/arduinoWide/img/ArduinoAPP-01.svg)
  
  The Zubi Flyer is built using [Arduino](https://www.arduino.cc/) hardware and software. 
  
  Arduino is a hardware and software platform for hobbyists and Engineers to make neat electronics projects.
  
  If you want to write and modify the Arduino code that controls your Zubi Flyer, you'll first need to install the Arduino IDE on your laptop. 
  
  An IDE is an "Integrated Development Enviroment" and is used by Computer Programmers to write and modify code, and then turn that code into a computer program.
  
  [Download the Arduino IDE for Windows](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-windows.zip) | [Download the Arduino IDE for Mac](https://s3.amazonaws.com/adafruit-download/adafruit-arduino-1.6.4-macosx.zip)
  ------------ | -------------
## 2. Install Zubi Flyer Library
  After you've installed the Arduino IDE, you'll need to install Fuze's Zubi Flyer Library. 
  
  In Computer Programming, a "Library" is code that somebody else wrote that you can copy and modify.
  
  For example, if you want to modify the [Newbie-Zubi]() game on your Zubi Flyer, you don't have to write the code for the entire game on your own, you would use the Newbie-Zubi code that we already wrote and put in the Zubi Flyer Library.
  
  If you're curious, feel free to [read more](https://www.arduino.cc/en/Hacking/LibraryTutorial) about how Arduino Libraries work.
  
  1. [Download]() the Zubi Flyer .ZIP Library
  2. Open the Arduino IDE, navigate to Sketch > Include Library. At the top of the drop down list, select the option to "Add .ZIP Library''.
  ![Import Library From Zip](https://www.arduino.cc/en/uploads/Guide/ImportLibraryFromZIPFile.png)
  3. Navigate to the Zubi Flyer .ZIP file's location and open it.
  ![Select Zubi Flyer .ZIP file](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/find_zip_file.png?raw=true)
  4. Restart the Arduino IDE and you're done.
  
  TODO Show Examples files
  
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
  Coming Soon
