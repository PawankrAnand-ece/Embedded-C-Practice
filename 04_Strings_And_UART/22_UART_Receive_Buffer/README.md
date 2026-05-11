# 22 - UART Receive Buffer Simulation

## Objective
Simulate UART data reception byte by byte using a receive buffer.

## Concept
UART receives one byte at a time. Firmware stores each byte into a buffer until a full command or packet is received.

## Example
Incoming Data:
PAWAN KUMAR ANAND

Received sequence:
P ->A ->W ->A ->N ->->K ->U ->M ->A ->R -> ->A ->N ->A ->N ->D

Final Buffer:
PAWAN KUMAR ANAND

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

Received Byte: P | Buffer: P
Received Byte: A | Buffer: PA
Received Byte: W | Buffer: PAW
Received Byte: A | Buffer: PAWA
Received Byte: N | Buffer: PAWAN
Received Byte:   | Buffer: PAWAN 
Received Byte: K | Buffer: PAWAN K
Received Byte: U | Buffer: PAWAN KU
Received Byte: M | Buffer: PAWAN KUM
Received Byte: A | Buffer: PAWAN KUMA
Received Byte: R | Buffer: PAWAN KUMAR
Received Byte:   | Buffer: PAWAN KUMAR 
Received Byte: A | Buffer: PAWAN KUMAR A
Received Byte: N | Buffer: PAWAN KUMAR AN
Received Byte: A | Buffer: PAWAN KUMAR ANA
Received Byte: N | Buffer: PAWAN KUMAR ANAN
Received Byte: D | Buffer: PAWAN KUMAR ANAND

Final Received Command: PAWAN KUMAR ANAND