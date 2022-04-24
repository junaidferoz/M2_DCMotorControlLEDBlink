## HIGH LEVEL TEST PLAN
| _TEST_ID_ |_COMPONENT_ | _INPUT_                                             | _EXPERIMENTAL O/P_      | _ACTUAL O/P_ | _TEST_TYPE_ |    
|-------------|--------------------------------------------------------------|------------- | ------------------ | ------------ | ---------- |
| H_01 | RTD  | senses Temperature above threshold value   | The motor is triggered as ON | The motor is triggered as ON | Requirement |
| H_02 | RTD  | senses Temperature below threshold value   | The motor is not triggered ON | The motor remains OFF | Requirement |
| H_03 | Motor  |  Is passed with HIGH value on both terminals  | The motor is OFF | The motor is triggered OFF | Requirement |
## LOW LEVEL TEST PLAN
| _TEST_ID_ | _COMPONENT_ | _INPUT_                                             | _EXPERIMENTAL O/P_      | _ACTUAL O/P_ | _TEST_TYPE_ |    
|-------------|--------------------------------------------------------------|------------- | ------------------ | ------------ | ---------- |
 | L_01 | RTD  | Give Temperature above threshold value   | Show a value greater than 0V | Show a value greater than 0V | Requirement |
|  L_02 | RTD  |Give Temperature below threshold value | Shows 0V  | Shows 0V | Requirement    |
| L_03 | Motor | Give Temperature above threshold value | Must rotate | rotates | Requirement |
| L_04 | Motor |  Give Temperature below threshold value | Must not rotate | does not rotates | Requirement |
| L_05 | Motor |  Give a voltage value above 0V to both the terminals of the motor | Must not rotate | does not rotate | Requirement |
| L_06 | Motor |  Gives a voltage value above 0V to any one of the terminals of the motor | Must rotate | rotates | Requirement |
