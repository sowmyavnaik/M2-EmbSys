# Password Based Door Lock System

Password Based Door Lock System using 8051 Microcontroller is a simple project where a secure password will act as a door unlocking system. Password Based Circuit Breaker Password Based Door Lock System using 8051 Microcontroller is a simple project where a secure password will act as a door unlocking system. This system demonstrates a Password based Door Lock System using 8051 Microcontroller, wherein once the correct code or password is entered, the door is opened and the concerned person is allowed access to the secured area. Again, if another person arrives, it will ask to enter the password. If the password is wrong, then door would remain closed, denying access to the person.

## Block digram
(https://github.com/sowmyavnaik/M2-EmbSys/blob/main/CaseStudy/Casestudy1/BD1.png)

## High level requirements
* Open the door
* Close the door
* Display the message "enter the password" on LCD
* If entered password is incorrect display "wrong password" on LCD

## Low level requirements
* Read the five digit password from the user
* compare the entered password with the stored password
* If password correct, open the door
* After some time close the door
* If the password is wrong then display wrong pasword on Lcd
* If the password is wrong also make a buzzer sound
* After some delay again ask to enter password

## Principle Behind the Circuit
The main component in the circuit is 8051 controller. In this project, a 4×4 Matrix Keypad is used to enter the password. The password which is entered is compared with the predefined password.

If the entered password is correct, then the system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong, then the door is remains closed and displays “PWD is wrong” on LCD.

## Components Required
* 8051 Microcontroller
* 8051 Development Board
* 4×4 Matrix Keypad
* 16×2 LCD
* L293D Motor Driver Board
* DC Motor
* 10KΩ Potentiometer
* Connecting wires
* Power Supply

## Functions of the components used
* AT89C52 Microcontroller:
Here, an AT89C52 Microcontroller is used and it is an 8-bit controller. This controller requires a supply voltage of +5V DC. In order to provide regulated 5V DC voltage to the controller we need to use 7805 power supply circuit. We can use 9V DC battery or 12V, 1A adaptor as a power source. The Atmel AT89C52 is an 8-bit microcontroller from the 8051 series. The AT89C52 contains 256 bytes of RAM and 8KB of Flash programmable and erasable read only memory (PEROM). The AT89C52 has a 1000 Write/Erase cycle endurance rating, which implies it can be wiped and programmed 1000 times.

* L293D Motor Driver:
Electrical energy is converted into mechanical energy by motors. This motor is used to open and close the door. The motor must rotate, and we use the L293D driver to accomplish this. This driver helps in the control of the motor's speed and direction.

* 4×4 Matrix Keypad:
A keypad is a collection of buttons with various symbols, numerals, and alphabets arranged in a 4x4 grid. Push button keypads, membrane switch keypads, resistive touch keypads, capacitive touch keypads, and other types of keypads are available on the market. We need to type passwords in our project, so the push button keypad will be chosen because of its high stiffness and inexpensive cost compared to other keypads.

* 16×2 LCD:
A liquid crystal display, sometimes known as an LCD, is a great way for a microcontroller to show visual data. LCDs may display microcontroller output such as time, date, and temperature, etc. they can also be used to display memory contents and aid in code debugging.

## Password Based Door Locking System Circuit Operation
* Once the circuit is powered ON, microcontroller sends commands to the LCD to display “enter password” on LCD.  Now we need to enter the password using the keypad. Once password is entered, it displays 5 stars on LCD to indicate that controller read password successfully.
* Now the controller compares the entered password with predefined password. If the password is matched, then the microcontroller makes P0.0 HIGH and P0.1 LOW, so the motor driver gets the input signals for forward motion of the motor.
* As a result, the Door Motor rotates in forward direction to open the door. After a delay of 10seconds, the microcontroller makes P0.0 LOW and P0.1 HIGH, so the motor driver gets the input signals for reverse motion. As a result, the Door motor rotates in reverse direction to close the door.
* If the password is not matched, then microcontroller maintains both P0.0 and P0.1 LOW. Hence, the door motor is stationary so that door remains closed.

## Applications of Password Based Door Lock System
* This simple circuit can be used at residential places to ensure better safety.
* It can be used at organizations to ensure authorized access to highly secured places.
* With a slight modification this Project can be used to control the switching of loads through password.
