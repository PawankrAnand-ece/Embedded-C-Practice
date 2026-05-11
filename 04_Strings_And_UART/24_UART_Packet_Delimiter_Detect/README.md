# 24 - UART Packet Delimiter Detect

## Objective
Detect UART packet start and end delimiters.

## Packet Format
<LEDON>

## Concept
UART stream may contain extra bytes before or after the actual packet.
Firmware uses delimiters to identify valid packet boundaries.

## Delimiters
Start delimiter: `<`  
End delimiter: `>`

## Example
UART Stream:
abc<LEDON>xyz

Detected Packet:
LEDON

## Industrial Use
- UART command parsing
- RS485 packet handling
- GSM/GPS data parsing
- Device configuration commands
- Embedded protocol design

## Output
UART Stream Scanning Started

Start delimiter detected
End delimiter detected
Received Packet: LEDON