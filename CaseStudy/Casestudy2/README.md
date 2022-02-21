# Biometric Attendance System
Finger print identification is based on the fact that no two persons will have the same finger print in this world. This is because of the peculiar genetic code of DNA in each person. Finger print module differentiates between two fingers based on the ridges and valleys on finger print. When the finger print is given it stores the points where there are changes in the direction of ridges and valleys using some algorithms. Inside the finger print module a DSP processor is present to implement and analyze the algorithm.

## Principle
Main heart of the circuit is finger print module. This sends commands to the controller when ever finger print is matched. Microcontroller receives these commands from the finger print module and uses the internal EEPROM to store the attendance. Keypad is used to send the requests to the controller either enroll the new one or to save the attendance or to exit.LCD display displays the messages related to the commands received.

## Block diagram
(https://github.com/sowmyavnaik/M2-EmbSys/blob/main/CaseStudy/Casestudy2/BD2.png)

## Requirements
### High level requirements
* LCD should display “Biometric Attendance System”.
* After sometime it will display a message “1.Attendance, 2.Save, 3.Clear”.
* If your finger is not matched  it will indicate the same.
* After saving successfully your details it displays a message saved.

### Low level requirements
* Now press 1 from the keypad. It will take the attendance if you place your finger on the module. 
* If your finger is not matched  it will indicate the same by a buzzer.
* If you want to save your roll number press 2 from the keypad. It will ask you to enter the roll number and asks you to place your finger. 
* To enroll again press 1 from the keypad and press 2 to exit.
* If you want to clear the data press 3 from keypad and enter the password 

## Components Required
* AVR microcontroller development board.
* Fingerprint module R305.
* Keypad (4*3).
* Atmega8 microcontroller
* RS232 Serial cable.
* DC Battery or Adaptor (12V, 1Amp).
* 16*2 Alpha Numeric LCD.
* Single pi connecting wires.

* Atmega8 microcontroller:
ATmega8 microcontroller which is an AVR family microcontroller. It is 8 bit microcontroller and has 23 programmable input and output pins. It has 8 KB of flash memory, 512 bytes of EEPROM, 1KB of SRAM.
* 16×2 LCD:
Liquid crystal display is used for displaying the messages. This is interfaced to PORTB of the micro controller. LCD in 4bit mode is connected to the micro controller. D4-D7 pins are connected to the PB0-PB3 pins of the microcontroller. RS pin is connected to the PB4, RW pin is connected to the PB5 and Enable pin is connected to the PB6 pin.
* 4×3 Matrix Keypad:
Keypad used in this project is 4*3 keypad i.e. it has four rows and three columns. Columns of the keypad are connected to the PORT D pins of the microcontroller. PD5 to PD7 pins are connected to the three columns of the keypad. Rows are connected to the PORT C of the microcontroller. PC0 to PC3 pins are connected to the rows of the keypad. To give attendance, press 1 from the keypad and to enroll press 2 from the keypad, to clear all the data press 3 from the keypad.
* Fingerprint module R305:
Biometric module used here is R305 series finger print module. It supports USART communication protocol. Here, USART protocol is used for communicating with the micro controller. Finger print processing involves two steps.1) finger enrollment and 2) finger matching. Initially, to enroll the finger user must give his finger print twice to the module. Module checks these two images and generates a template image and stores it.

## Working of Fingerprint Based Attendance System Circuit
* Connect the circuit as shown in the diagram.
* LCD will display “Biometric Attendance System”.
* After sometime it will display a message “1.Attendance, 2.Save, 3.Clear”.
* Now press 1 from the keypad. It will take the attendance if you place your finger on the module. If your finger is not matched it will indicate the same.
* If you want to save your roll number press 2 from the keypad. It will ask you to enter the roll number and asks you to place your finger. After saving successfully your details it displays a message saved.
* To enroll again press 1 from the keypad and press 2 to exit.
* If you want to clear the data press 3 from keypad and enter the password.

## Biometric Attendance System Circuit Applications:
* This can be used in educational institutions.
* Biometric attendance system can be used in industries.
* Biometrics can be used in ATM for authentication.
* Finger print authentication can be used in access control.