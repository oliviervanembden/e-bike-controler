
# Arduino E-bike controler

a very simple controller of a E-bike to monitor speed an paddle movement base on a arduino nano. The controller does not generate the power for the wheel but only regulates the signal to the speed controller with a relay.

## How does is work
The arduino monitors 2 hall effect sensors. One mounted at the peddles and one mounted at de wheel. 

## Code
U can change the max time between paddle pulses by change `maxPaddle` in main.ino note, time is in milliseconds
