#include <stdio.h>
#include <stdint.h>

void clear_nth_bit(uint8_t *reg, uint8_t bit_position)
{
    if ((reg != NULL) && (bit_position < 8U))
    {
        *reg = (uint8_t)(*reg & ~(1U << bit_position));
    }
}

int main(void)
{
    uint8_t register_value = 0xFFU;
    uint8_t bit_position = 3U;

    printf("Before clearing bit: 0x%02X\n", register_value);

    clear_nth_bit(&register_value, bit_position);

    printf("After clearing bit %u: 0x%02X\n", bit_position, register_value);

    return 0;
}