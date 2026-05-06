#include <stdio.h>
#include <stdint.h>

void extract_nibbles(uint8_t reg)
{
    uint8_t upper = (reg >> 4U) & 0x0FU;
    uint8_t lower = reg & 0x0FU;

    printf("Upper Nibble: 0x%02X\n", upper);
    printf("Lower Nibble: 0x%02X\n", lower);
}

int main(void)
{
    uint8_t register_value = 0xABU;

    printf("Register Value: 0x%02X\n", register_value);

    extract_nibbles(register_value);

    return 0;
}