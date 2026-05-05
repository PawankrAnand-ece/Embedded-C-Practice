/*C program checks whether the selected bit in an 8-bit register is HIGH or LOW. */

#include <stdio.h>
#include <stdint.h>

void check_bit_status(uint8_t reg, uint8_t bit_position)
{
    if (bit_position < 8U)
    {
        if (reg & (1U << bit_position))
        {
            printf("Bit %u Status: HIGH\n", bit_position);
        }
        else
        {
            printf("Bit %u Status: LOW\n", bit_position);
        }
    }
}

int main(void)
{
    uint8_t register_value = 0x08U;
    uint8_t bit_position = 3U;

    printf("Register Value: 0x%02X\n", register_value);

    check_bit_status(register_value, bit_position);

    return 0;
}