# 18 - Spike Noise Rejection Logic

## Objective
Remove sudden abnormal spikes from sensor data.

## Concept
If the current sample suddenly increases beyond a defined limit compared to the previous sample, it is treated as noise and replaced with the previous valid value.

## Example
Input:
512, 515, 518, 900, 516, 514, 517, 519

Filtered Output:
512, 515, 518, 518, 516, 514, 517, 519

## Industrial Use
- ADC noise filtering
- Smoke sensor signal cleaning
- Battery voltage monitoring
- Long-wire sensor systems
- Industrial panel fault prevention

## Output
Filtered Sensor Data:
512 515 518 518 516 514 517 519