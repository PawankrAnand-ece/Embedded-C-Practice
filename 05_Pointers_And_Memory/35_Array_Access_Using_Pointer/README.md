# 35 - Array Access Using Pointer

## Objective
Access array elements using pointer arithmetic.

## Concept
Array indexing internally works using pointer arithmetic.

Example:
array[i]

is equivalent to:

*(array + i)

## Working
- Pointer assigned to array base address
- Pointer arithmetic used to access elements
- Values printed sequentially

## Industrial Use
- DMA buffers
- UART packet parsing
- Sensor data processing
- SPI frame handling

## Important Concept
Array indexing internally uses pointer arithmetic.

## Output
ADC samples accessed using pointers.