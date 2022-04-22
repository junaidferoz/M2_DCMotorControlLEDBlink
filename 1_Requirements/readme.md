# Temperature based cooling system.
## Introduction
  * Its summer time! we all know how hot it is now-a-days.
  * We need to make sure that the environment is cool so that we can live our life easy in this harsh summer time.
  * I have proposed a model that does the same
## The Model
  * The model consists of a cooling appliance (fan here) controlled by a temperature sensor (mimicked using an RTD).
  * The entire process is controlled by an Atmega328.
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
