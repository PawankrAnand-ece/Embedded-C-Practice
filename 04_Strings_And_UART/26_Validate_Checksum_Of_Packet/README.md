# 26 - Validate Checksum of Packet

## Objective
Validate UART packet integrity using checksum comparison.

## Concept
Receiver recalculates checksum from received packet and compares it with transmitted checksum.

If both match:
Packet is VALID

Else:
Packet is CORRUPTED

## Example
Packet:
ANAND

Received Checksum:
0x62

Calculated Checksum:
0x62

Result:
VALID

## Industrial Use
- UART communication
- RS485 protocols
- Sensor packet verification
- Industrial automation
- Embedded communication systems

## Output
Packet Status : VALID