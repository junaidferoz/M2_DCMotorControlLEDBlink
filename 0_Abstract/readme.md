# ___TEMPERATURE SENSOR BASED COOLING SYSTEM___
## Abstract
  It is summer time. Temperatures are soaring everywhere. to battle the heat, I have proposed a system that controls the temperature of the surrounding environment and cools it. The system takes temperature as an input, which is analog in nature, converts it into a signal which can be analyzed by a microcontorller. The microcontroller used here is Atmega328. The microcontroller compares the temperaturethe sonsor has sensed with the ambient temperature fed to the microcontroller, and decides whether to switch on the cooling system or not. If the temperatuer sensed is greater than the ambient temperauture, it triggers the cooling system as ON, else it remains in OFF state. By this way, we can maintain the tmeperature of the surroundings.
  
  __KEY WORDS USED:__ _Temperature, Cooling System_ 
## COMPONENTS USED
|S.no.|Components used|
|:--:|:--:|
|1.|Atmega328|
|2.|RTD|
|3.|DC MOTOR|
|4.|Fixed source (5V)|
|5.|Resistors|

## The entire process
It is divided into 3 parts
  1. Get the temperature from the environment
  2. check if it is greater than the ambient temperature of the place the user is in.
  3. If it is greater, switch on the cooling system (fan here). If not don't do anything.

## Circuit Diagram
![Temperature based Cooling System](https://user-images.githubusercontent.com/60928280/164615895-86ad5dda-88eb-411b-923b-96a57982699f.png)
