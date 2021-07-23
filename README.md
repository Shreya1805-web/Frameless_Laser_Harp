# Frameless_Laser_Harp

- It's frameless laser harp using Arduino IDE (Embedded C) and MIDI interface. 
- Other modules included working of stepper motors, laser,IR sensors and ULN2003.
- Project for (the tech fest of BITS Pilani, Hyderabad campus) ATMOS'19.

## About Arduino UNO
<div align = "center">
<img src ="https://www.theengineeringprojects.com/wp-content/uploads/2018/06/Introduction-to-Arduino-UNO.jpg" height ="500px" width ="700px">
</div> <br/>
The Arduino Uno is an open-source microcontroller board based on the Microchip ATmega328P microcontroller and developed by Arduino.cc. The board is equipped with sets of digital and analog input/output pins that may be interfaced to various expansion boards and other circuits.

## About Arduino IDE
<div align = "center">
<img src ="https://github.com/Shreya1805-web/Frameless_Laser_Harp/blob/main/Getting-started-with-Arduino-IDE-Ficherd-Image.webp" height ="400px" width ="700px">
</div> <br/>
The Arduino Integrated Development Environment is a cross-platform application that is written in functions from C and C++. It is used to write and upload programs to Arduino compatible boards, but also, with the help of third-party cores, other vendor development boards.

## About Stepper Motors
<div align = "center">
<img src ="https://github.com/Shreya1805-web/Frameless_Laser_Harp/blob/main/stepper%20motor.jpg" width ="300px">
</div> <br/>
A stepper motor, also known as step motor or stepping motor, is a brushless DC electric motor that divides a full rotation into a number of equal steps.They have multiple coils that are organized in groups called "phases". By energizing each phase in sequence, the motor will rotate, one step at a time. With a computer controlled stepping you can achieve very precise positioning and/or speed control. For this reason, stepper motors are the motor of choice for many precision motion control applications. Stepper motors come in many different sizes and styles and electrical characteristics. We chose the model as per our requirements.

## About ULN2003
<div align = "center">
<img src ="https://github.com/Shreya1805-web/Frameless_Laser_Harp/blob/main/Stepper-Motor-ULN2003-Connection-Diagram.png" width ="400px">
</div> <br/>
The ULN2003A is an array of seven NPN Darlington transistors capable of 500 mA, 50 V output. It features common-cathode flyback diodes for switching inductive loads. It can come in PDIP, SOIC, SOP or TSSOP packaging.

## About IR sensors
<div align = "center">
<img src ="https://github.com/Shreya1805-web/Frameless_Laser_Harp/blob/main/IR-Sensor-Digital-Pin-Diagram.jpg" width ="400px">
</div> <br/>
IR sensor is an electronic device, that emits the light in order to sense some object of the surroundings. An IR sensor can measure the heat of an object as well as detects the motion. Usually, in the infrared spectrum, all the objects radiate some form of thermal radiation.

## About MIDI
MIDI (Musical Instrument Digital Interface) is a technical standard that describes a communications protocol, digital interface, and electrical connectors that connect a wide variety of electronic musical instruments, computers, and related audio devices for playing, editing and recording music.

## So what exactly is happening ?
<div align = "center">
<img src ="https://github.com/Shreya1805-web/Frameless_Laser_Harp/blob/main/IMG-20191018-WA0033.jpg" height ="500px">
</div> <br/>
When a laser string is plucked in mid-air, the laser light blocked by the hand of the user and reflected by a rotating mirror falls on a series of IR sensors. Based on the position of the mirror and reading, the microcontroller understands which string was plucked and the corresponding musical note is played (with the help of MIDI).




