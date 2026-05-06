/*C program reverses all bits of an 8-bit register.*/

#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t reg)
{
    uint8_t reversed = 0U;

    for (uint8_t i = 0U; i < 8U; i++)
    {
        reversed = (uint8_t)(reversed << 1U);
        reversed = (uint8_t)(reversed | (reg & 0x01U));
        reg = (uint8_t)(reg >> 1U);
    }

    return reversed;
}

int main(void)
{
    uint8_t register_value = 0x16U;   // 00010110

    printf("Original Value : 0x%02X\n", register_value);

    uint8_t result = reverse_bits(register_value);

    printf("Reversed Value : 0x%02X\n", result);

    return 0;
}