# Temperature based cooling system.
## Introduction
  * Its summer time! we all know how hot it is now-a-days.
  * We need to make sure that the environment is cool so that we can live our life easy in this harsh summer time.
  * I have proposed a model that does the same

## SWOT ANALYSIS
### ___Strengths___
 1.  Simple and easy way to maintain ambient temperature of the room
 2.  Ambient temperature can be changed depending on the season. 
 3.  An Economical package of effective cooling system that is affordable for all
### ___Weakness___
 1. Cannot have control over more than one appliance.
 2. Setting of ambient temperature is not accurate (Exact temperature cannot be predicted by all).
 3. Extreme teperatures can damage the system.
### ___Opportunities___
 1. Provides an opportunity to automate cooling process of surrounding environment.
 2. also opens a gateway for heating system for places where there is extreme cold weather.
### ___Threats___
 1. Susceptible to being controlled by unauthorised people.
 2. Power supply issues can dampen the efficiency of this system.

# 4 W's and 1 H
## __What?__
 This system is all about detecting the ambient temperature of the surroundings and bringing it down to ambient levels if it greater than the abmbient temperature.
## __Who?__
 This system can be used by anyone. Workers, homemakers, etc. can use this
## __When?__
 This system is mostly used in summer, when the temperature is hot.
## __Where?__
 this system can be used anywhere. it can be sued in schools, offices, malls, theatres, etc.
## __How?__
 This system senses the ambient temperature by using a temperature sensor (mimicked as an RTD here). This data is sent to the microcontorller, which check if the sensed temperature is greater than the ambient temperature. If it is so, then it sets the cooling system as ON. Else it remains OFF.
 
 # High Level Requirements
| ID | Description | Category | 
| ----- | ----- | ------- | 
|HLR01|the system should be able to detect temperature|technical|  
|HLR02|The system should be able to trigger the cooling system|technical|

## LOW LEVEL REQUIREMENTS
 | Parameters | DESCRIPTION                                             | STATUS      |    
|-------------|--------------------------------------------------------------|------------- |
 | Accuracy |It should accurately detect the temperature set by the user  | Implemented    |
|  Performanace       |The system should trigger the cooling system accurately as specified by the user| Implemented    |
