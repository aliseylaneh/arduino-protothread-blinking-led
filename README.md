# Arduino Protothread

Protothreads are extremely lightweight stackless threads designed for severely memory constrained systems, such as small embedded systems or wireless sensor network nodes. Protothreads provide linear code execution for event-driven systems implemented in C. Protothreads can be used with or without an underlying operating system to provide blocking event-handlers. Protothreads provide sequential flow of control without complex state machines or full multi-threading.

## Installation
Use the arduino file directly into you're arduino IDE . And also hex file are available to use for arduino boards and Proteus simulations.

## Description
This is a simulation of a led which is blinking during the runtime and user increase it's blinking speed to 4 level by pushing down a button, then the speed will be refreshed.
So as it's obvious Arduino is a single core board and it's not able to do multithreading or something like that, but there is a libreary called 'pt' which is related to C language.
You can use this library to simulate a program, like it works like multithreading program which it's not :D but it's sounds like one those out there. Enjoy 
