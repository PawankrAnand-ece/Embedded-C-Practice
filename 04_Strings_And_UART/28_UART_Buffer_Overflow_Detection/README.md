# 28 - UART Buffer Overflow Detection

## Objective
Detect overflow condition in UART circular buffer.

## Concept
In interrupt-driven UART, incoming data is stored in a circular buffer.
Before writing new data, firmware checks whether the buffer is full.

## Full Condition
next_head == tail

## Important Note
For this design, one buffer slot is kept empty to differentiate full and empty conditions.

If:
head == tail

It means empty.

If:
next_head == tail

It means full.

## Industrial Use
- UART RX interrupt buffering
- RS485 communication
- GPS data reception
- GSM modem responses
- Embedded debug console

## Output
Buffer Overflow! Data lost: H  
Buffer Overflow! Data lost: I  
Buffer Overflow! Data lost: J  
Buffer Overflow! Data lost: K  

Final Status: Overflow Detected