#DIY GAMER & MINECRAFT

ever wanted to control your Minecraft world with your DIY Gamer and vice versa? 

This system allows you to control your Minecraft character using Python and serial communication to turn your Gamer into a HID device [Human Interface Device](https://en.wikipedia.org/wiki/Human_interface_device "HID")

To communicate from your minecraft world to the Gamer, the system uses Command Blocks to send Raw data to the console log.

Available for Mac & Windows*(soon)*


##MAC INSTALL

###Prerequisites

* Install [Minecraft](https://minecraft.net/download "Minecraft") from the website (make sure you have opened it before continuing) 

* Install [Python 2.7.10](https://www.python.org/downloads/ "Python") from the website

* Install pip on terminal by typing:
<br> `sudo easy_install pip` </br>

* Install [Arduino](https://www.arduino.cc/en/Main/Software)
###Install

* Navigate to python_MINECRAFT folder in terminal: 
 `cd PATH/TO/Minecraft_Gamer/python_MINECRAFT` 

* Install Libraries using pip in terminal
`sudo pip install -r requirements.txt`
 * *if above fails, make sure you've completed prerequisites*

* Plug in your Gamer, open new a terminal window and type:
`ls /dev/tty.*`

 When *usbmodem.XXXX* appears, note down the 4 digit number as this is your Gamer’s serial port.

* Open **log.py** & **gamer.py** in your text editor and change the serial port '*/dev/tty.usbmodemXXXX*' with your own from earlier. 
* Change the **USERNAME** directory to your computers user name. *(/Users/USERNAME/Library/..)*

* run both **log.py** & **gamer.py** in separate terminal windows 
`python gamer.py` 
`python log.py`
<br> *(make sure your terminal directories are pointing to SerialEvent_MINECRAFT so the python files can be executed)* </br>

###What does it do?

The Python scripts open the serial communication with the DIY Gamer, allowing two way communication via USB. When an event is received from the Gamer, the Python scripts uses a python library called **pyUserInput** to turn serial events into Keyboard & mouse events.

`k.press_key('d')`


While in Single Player world, you create command blocks by typing in chat 
*(press T for chat)*
`/give <player> minecraft:command_block <amount>`


The log file entry is created by adding the command block output:

	tellraw @p { text:"Arduino LED Triggered" } 
	
[Here's how to change this](https://www.youtube.com/watch?v=63X1vMd9oUk)

####Controls
Up Arrow     =  Move Forward

Left Arrow   =  Move Left

Right Arrow  =  Move Right

Down Arrow   =  Move Down

Start Button =  Use Item
<br></br>
These can all be changed in the **gamer.py** file.






