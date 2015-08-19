#DIY GAMER & MINECRAFT

**Make sure the branch matches your operating system (*Mac* or *Windows*)**

Ever wanted to control your Minecraft world with your DIY Gamer and vice versa? 

This system allows you to control your Minecraft character using Python and serial communication to turn your Gamer into a HID device [Human Interface Device](https://en.wikipedia.org/wiki/Human_interface_device "HID")

To communicate from your minecraft world to the Gamer, the system uses Command Blocks to send Raw data to the console log.

Available for Mac & Windows*(soon)*


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






