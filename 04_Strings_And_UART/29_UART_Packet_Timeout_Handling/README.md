# 29 - UART Packet Timeout Handling

## Objective
Detect incomplete UART packet using timeout logic.

## Concept
If packet start delimiter is detected but end delimiter does not arrive within expected time/byte limit, firmware clears the receive buffer.

## Example
UART Stream:
abc<LEDON

Problem:
Start delimiter received, but end delimiter missing.

Result:
Packet timeout. Buffer cleared.

## Industrial Use
- UART packet parser
- RS485 communication
- GSM/GPS response handling
- Embedded debug console
- Industrial communication fault handling

## Output
UART Packet Timeout Handling

Packet started
Packet timeout. Buffer cleared.