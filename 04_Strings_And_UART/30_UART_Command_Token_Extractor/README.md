# 30 - UART Command Token Extractor

## Objective
Extract command and value from UART packet.

## Packet Format
SET:25

## Concept
The packet is split using `:` delimiter.

Before delimiter:
Command

After delimiter:
Value

## Example
Input:
SET:25

Output:
Command : SET  
Value   : 25

## Industrial Use
- Threshold setting
- Relay control
- Sensor configuration
- UART command menu
- Industrial controller setup

## Output
Packet  : SET:25  
Command : SET  
Value   : 25