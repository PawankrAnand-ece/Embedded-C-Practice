# 23 - UART Command Compare

## Objective
Compare UART command strings and execute corresponding action.

## Commands
LEDON  
LEDOFF  
RESET  

## Concept
UART packets are stored in receive buffers.
Firmware compares received commands using `strcmp()`.

## Working
- Packet received
- Command compared
- Action selected

## Industrial Use
- Relay control
- UART command shell
- AT command parsing
- Device configuration
- Industrial automation

## Output
Received UART Packet : LEDON

Command Matched : LEDON
LED Status      : ON