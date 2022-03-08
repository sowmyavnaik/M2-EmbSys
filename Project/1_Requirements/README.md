# 1.Introduction
## 1.1 Description
This is a password based door lock system. This a microcontroller based project which created a secure access for a door which needs a password to open the door. The system will be used in places where we need more security. It can be used in door, lockers, main gates of house and ATM etc. The system uses a seven segment display array to show the password, a matrix keypad to enter the numbers/password and operates a relay (to activate the solenoid valve) for locking and unlocking purpose. The system alarms through a buzzer if a wrong password is entered for 3 times continuously and the system resumes for 1 hour.
## 1.2 Features
The user must enter a correct password to gain access.
The system uses a seven segment display array to show the password, a matrix keypad to enter the numbers/password and operates a relay for locking and unlocking purpose. 
The system alarms through a buzzer.
If a wrong password is entered for 3 times continuously and the system resumes for 1 hour.
## 1.3 5W and 1H
  ![linux_NDG](https://github.com/sowmyavnaik/M2-EmbSys/blob/main/Project/5W%201H.png)

## 1.4 SWOT analysis
### Strengths:
* For security purposes
* User friendly
### Weakness:
* Need to restart if power goes off
* Not connected to internet



# 2. Requirements
## 2.1 High level requirements
* HLR 1. It shall take the input through 4*4 keypad matrix.
* HLR 2. It shall display the password on 7 segment led.
* HLR 3. Password shall me verified
* HLR 4. It shall turn the buzzer on if wrong password is entered.
* HLR 5. It shall turn on the led if correct password is given.

## 2.2 Low level requirements
### Low level requirements for HLR 1
* LLR 1.1- It shall give a 4 digit password
* LLR 1.2- It shall press open key to open

### Low level requirements for HLR 2
* LLR 2.1- It shall have a option to either display the password or not
* LLR 2.2- It shall display a g segment

### Low level requirements for HLR 3
* LLR 3.1- The entered password shall be stored in the form of arraY 
* LLR 3.2- Then continue whether the password is valid or invalid

### Low level requirements for HLR 4
* LLR 4.1- If the password is incorrect a buzzer is turned on 
* LLR 4.2- It shall have a potentiometer to vary the sound of buzzer

### Low level requirements for HLR 5
* LLR 5.1- It shall on the relay
* LLR 5.2- It shall open the door
