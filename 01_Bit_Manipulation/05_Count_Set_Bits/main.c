/*
program to count number of bits set to 1 in an 8-bit register.
Brian Kernighan Algorithm (efficient bit counting)
*/

#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg)
{
    uint8_t count = 0U;

    while (reg)
    {
        reg = reg & (reg - 1U); // remove lowest set bit
        count++;
    }

    return count;
}

int main(void)
{
    uint8_t register_value = 0x0DU; // 00001101

    printf("Register Value: 0x%02X\n", register_value);

    uint8_t result = count_set_bits(register_value);

    printf("Number of set bits: %u\n", result);

    return 0;
}