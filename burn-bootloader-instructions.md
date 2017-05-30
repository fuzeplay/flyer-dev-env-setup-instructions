# Burning the FuzePlay Bootloader onto a new board

## Prerequisites
Complete the [Zubi Flyer Setup Instructions](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/README.md).

At minimum, you will need to complete steps 1 and 3.

If you are using Windows, you will also need to [install the USBtinyISP drivers](https://learn.adafruit.com/usbtinyisp/drivers).

## Uploading the bootloader

### 1 Make sure you have selected *FuzePlay Zubi Flyer* as your board.

### 2 Make sure you have selected *USBtinyISP* as your programmer.

![Select the USBtinyISP](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/select_usb_tiny_isp.png?raw=true!)

![The USBtinyISP](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/usb_tiny_isp.jpg?raw=true)

The [USBtinyISP](https://learn.adafruit.com/usbtinyisp) is an AVR programmer designed by ladyada, aka [Limor Fried](https://en.wikipedia.org/wiki/Limor_Fried).

### 3 Connect the USBtinyISP to the Zubi Flyer ISP Adapter Board

![Zubi Flyer ISP Adapter Board](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/adapter.png?raw=true)
The Zubi Flyer ISP Adapter Board

![Connecting the Programmer to the Adapter Board](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/connect_programmer_to_adapter.png?raw=true)
Connect the 3x2 headers from the Programmer to the Adapter Board. Make sure that the cable is oriented like in the picture (with the red stripe on the right side).

The Adapter Board is fragile, so hold onto the Adapter Board when you are connecting/ removing the 3x2 headers

### 4 Connect the Zubi Flyer ISP Adapter Board to the Zubi Flyer

![Connection View One](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/connect_adapter_to_board.png?raw=true)


![Connection View Two](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/connect_adapter_to_board_two.png?raw=true)

Make sure your board is oriented like in the picture.

### 5 Connect the USBtinyISP to your laptop using a USB A to B cable.

![The Cable](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/usb_tiny_cable.jpg?raw=true)

The green light on the USBtinyISP should turn on while it is connected to your laptop.

### 5 Go to Tools > Burn Bootloader

The red light on the USBtinyISP should turn on during the burning process.

If everything worked correctly, you should see the following in the Arduino IDE:

![Bootloader Burnt Correctly](https://github.com/fuzeplay/flyer-dev-env-setup-instructions/blob/master/images/done_burning.png?raw=true)

Sources
http://www.pighixxx.com/test/portfolio-items/pro-micro/
https://fabienroyer.files.wordpress.com/2010/12/6-pin-isp-cable.png
