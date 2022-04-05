# BadUSB Exploit

BadUSB Exploit PoC using Digispark Attiny85 board. Useful for executing payloads on unlocked machines.   

# Motivation
Human Interface Devices (HIDs) are generally trusted by most personal computer systems. Host operating systems do not ask users for permission before allowing a new keyboard or mouse to send in input after being plugged in. 

I'm a hacker. If I can control the keyboard and mouse, I can run malware on your computer. But to do that, I'd need to have direct physical access to the computer, putting myself at risk, right?. What if I didn't have to be there, and I could type at the speed of light? Enter BadUSB, a deadly and inherently unpatchable exploit that affects almost every computer with a USB port. 

# Exploit 
The goal of this exploit is to achieve arbitrary code execution on the target machine. 

1. Attacker socially engineers victim into plugging in "BadUSB" device, which appears as a normal USB drive.
2. Device can now send keyboard/mouse commands over HID protocol through a USB Port.
3. Device runs a powershell command to pull executable from hosting link, and executes.




