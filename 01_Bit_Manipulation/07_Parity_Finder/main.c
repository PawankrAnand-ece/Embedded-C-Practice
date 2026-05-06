/*
program to check whether number of set bits in a register is EVEN or ODD.
*/

#include <stdio.h>
#include <stdint.h>

uint8_t count_set_bits(uint8_t reg)
{
    uint8_t count = 0U;

    while (reg)
    {
        reg = reg & (reg - 1U);
        count++;
    }

    return count;
}

void check_parity(uint8_t reg)
{
    uint8_t count = count_set_bits(reg);

    if (count % 2U == 0U)
    {
        printf("Parity: EVEN\n");
    }
    else
    {
        printf("Parity: ODD\n");
    }
}

int main(void)
{
    uint8_t register_value = 0x0DU;

    printf("Register Value: 0x%02X\n", register_value);

    check_parity(register_value);

    return 0;
}