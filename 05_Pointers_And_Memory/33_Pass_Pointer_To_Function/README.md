# 33 - Pass Pointer To Function

## Objective
Understand how pointers allow functions to modify original variables.

## Concept
Instead of passing variable value, firmware passes variable address.

Function accesses original memory using pointer dereferencing.

## Operators

&  → address of variable  
*  → access value using pointer

## Working
- Variable created
- Address passed to function
- Function modifies original variable

## Industrial Use
- Peripheral drivers
- UART drivers
- Sensor APIs
- DMA configuration
- HAL libraries

## Output
Before Function Call : 320
After Function Call  : 850