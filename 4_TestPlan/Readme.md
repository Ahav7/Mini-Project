# Test Plan
## High level test plan
|Test ID|Description|Expected Input|Expected Output|Actual Output|Type of Test|
|-------|--------------------|------------------------|-------------------|----------------|--------------|
|H01|Resistance based on color code|2,7,5,8,9|Invalid Input|Invalid Input|Boundary check conditions|
|H02|Parallel Resistance of 3 resistors|2,3,4|Total parallel resistance=1.083333333 ohm|Total parallel resistance=1.0833 ohm|Scenario based|
|H03|Series Resistance of 3 resistors|2,3,4|Total series resistance=9.00000000 ohm|Total series resistance=9 ohm|Scenario based|
## Low level test plan
|Test ID|Description|Expected Input|Expected Output|Actual Output|Type of Test|
|-------|--------------------|------------------------|-------------------|----------------|--------------|
|L01|Calculate the seies resistance|2,3,0|Total series resistance=5.000000 ohms|Total series resistance=5.000000 ohms|Scenario based|
|L02|Resistance based on color code|1,0,0,1|Invalid Input|Invalid Input|Scenario based|
|L03|Resistance based on voltage and current parameters|0,1|Invalid input:ampere|Invalid input:ampere|Scenario based|
