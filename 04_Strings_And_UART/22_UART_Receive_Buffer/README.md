# 22 - UART Receive Buffer Simulation

## Objective
Simulate UART data reception byte by byte using a receive buffer.

## Concept
UART receives one byte at a time. Firmware stores each byte into a buffer until a full command or packet is received.

## Example
Incoming Data:
LEDON

Received sequence:
L -> E -> D -> O -> N

Final Buffer:
LEDON

## Why Null Character is Used
In C, strings must end with `\0`.  
After every received byte, the buffer is null-terminated to keep it safe for printing and string comparison.

## Buffer Overflow Protection
The program stores data only until `RX_BUFFER_SIZE - 1` so that one byte is always reserved for `\0`.

## Industrial Use
- UART command reception
- GSM/GPS data reception
- ESP32 AT command handling
- RS485 packet reception
- Debug console input

## Output
Receiving UART data byte by byte...

Received Byte: L | Buffer: L  
Received Byte: E | Buffer: LE  
Received Byte: D | Buffer: LED  
Received Byte: O | Buffer: LEDO  
Received Byte: N | Buffer: LEDON  

Final Received Command: LEDON