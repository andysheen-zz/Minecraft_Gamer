*****MAC INSTALL*****

*install Minecraft from website

*install python 2.7.10 from website

*install pip on terminal by typing sudo easy_install pip

*navigate to python_MINECRAFT folder (cd Desktop/Minecraft_Gamer/python_MINECRAFT) install libraries using pip by typing sudo pip install -r requirements.txt

*plug in gamer, open new terminal window and type ls /dev/tty.* When (usbmodem.*) appears,this is your Gamer’s serial port

*edit log.py & gamer.py with this serial port (/dev/tty.usbmodem****). Also change the USER directory to your computers user.(/Users/YOURUSER/Library/..)

* run both log.py & gamer.py in separate terminal windows (python gamer.py) (python log.py)


This is some basic python to follow the minecraft log file and trigger something to happen on an Arduino (running firmata).

In Single world, create command blocks by typing in chat 
(press T for chat)
/give <player> minecraft:command_block <amount>

The log file entry is created via a command block using a command something like 

	tellraw @p { text:"Arduino LED Triggered" } 





