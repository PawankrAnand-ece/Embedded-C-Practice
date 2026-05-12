# 27 - UART Circular Buffer Simulation

## Objective
Simulate UART circular buffer used in interrupt-driven communication.

## Concept
UART data may arrive continuously.
Circular buffers store incoming bytes safely without blocking CPU.

## Components
- Head pointer → write location
- Tail pointer → read location

## Circular Behavior
When buffer end is reached:
pointer wraps back to beginning.

## Industrial Use
- UART RX interrupts
- GPS communication
- Bluetooth modules
- RS485 systems
- Embedded logging

## Output
Data written and read using circular buffer logic.