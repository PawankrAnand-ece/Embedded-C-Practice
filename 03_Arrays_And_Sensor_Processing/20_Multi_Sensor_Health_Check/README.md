# 20 - Multi-Sensor Health Check

## Objective
Check health status of multiple sensors using valid range limits.

## Concept
Each sensor value is compared with minimum and maximum valid limits.
If the value is outside the valid range, it is marked as FAULT.

## Example Values
Sensor 1: 512  
Sensor 2: 850  
Sensor 3: 95  
Sensor 4: 620  

Valid Range: 100 to 900

## Industrial Use
- Fire alarm panel zone health check
- Battery monitoring
- Sensor disconnection detection
- Industrial control panels
- IoT monitoring systems

## Output
Multi-Sensor Health Check

Sensor 1 Value: 512 -> OK  
Sensor 2 Value: 850 -> OK  
Sensor 3 Value: 95 -> FAULT  
Sensor 4 Value: 620 -> OK