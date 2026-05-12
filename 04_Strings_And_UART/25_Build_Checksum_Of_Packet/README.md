# 25 - Build Checksum of Packet

## Objective
Calculate checksum of a UART packet.

## Concept
Checksum is calculated by adding ASCII values of all packet characters.

## Example
Packet:
ANAND

ASCII Sum:
A + N + A + N + D

Checksum:
0x62

## Industrial Use
- UART packet validation
- RS485 communication
- Sensor packet integrity
- Data corruption detection
- Embedded protocol design

## Output
Packet   : ANAND
Checksum : 0x62