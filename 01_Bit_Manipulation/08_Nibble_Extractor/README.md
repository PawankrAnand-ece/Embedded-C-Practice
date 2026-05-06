# 08 - Extract Upper and Lower Nibble

## Objective
Extract upper and lower 4 bits from an 8-bit register.

## Formula Used
Upper = (reg >> 4) & 0x0F  
Lower = reg & 0x0F

## Explanation
Right shift extracts upper nibble.
Masking isolates only 4 bits.

## Example
Register Value : 0xAB (10101011)  
Upper Nibble   : 0x0A  
Lower Nibble   : 0x0B

## Industrial Use
- BCD data processing
- 7-segment display control
- Communication packet decoding
- Embedded data formatting

## Output
Register Value: 0xAB  
Upper Nibble: 0x0A  
Lower Nibble: 0x0B