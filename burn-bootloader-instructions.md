# Burning the FuzePlay Bootloader onto a new board

## Prerequisites
Complete the [Zubi Flyer Setup Instructions](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/README.md).

At minimum, you will need to complete steps 1 and 3 (as well as step 4 if you are using Windows).

## Uploading the bootloader

### 1 Make sure you have selected *FuzePlay Zubi Flyer* as your board.

### 2 Make sure you have selected *USBtinyISP* as your programmer.

![Select the USBtinyISP](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_usb_tiny_isp.png?raw=true!)

![The USBtinyISP](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/usb_tiny_isp.jpg?raw=true)

The [USBtinyISP](https://learn.adafruit.com/usbtinyisp) is an AVR programmer designed by ladyada, aka [Limor Fried](https://en.wikipedia.org/wiki/Limor_Fried).

### 3 Connect the USBtinyISP to your laptop using a USB A to B cable.

![The Cable](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/usb_tiny_cable.jpg?raw=true)

### 4 Connect the USBtinyISP to the Zubi Flyer 

//Picture of the ISP Adapter Board

### 5 Go to Tools > Burn Bootloader

If everything worked correctly, you should see XXXX at the bottom of the Arduino bootloader.

Sources
http://www.pighixxx.com/test/portfolio-items/pro-micro/
https://fabienroyer.files.wordpress.com/2010/12/6-pin-isp-cable.png
