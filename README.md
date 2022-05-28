# EveUSB 

<img src="./badusb.gif" width="300px"/>

Proof of concept of the [BadUSB exploit](https://www.wired.com/2014/07/usb-security/) using Digispark Attiny85 board. Useful for executing payloads on unlocked machines. Read the original paper [here](https://www.researchgate.net/publication/331876425_BadUSB_the_threat_hidden_in_ordinary_objects).    

## Implementation Details
The goal of this implementation is to achieve arbitrary code execution on the target machine. 

1. Attacker socially engineers victim into plugging in "BadUSB" device, which appears as a normal USB drive.
2. Device can now send keyboard/mouse commands over HID protocol through a USB Port.
3. Device quickly opens a terminal and executes a command to download and execute file. 
