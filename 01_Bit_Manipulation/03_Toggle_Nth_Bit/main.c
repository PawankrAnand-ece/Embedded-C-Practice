#include <stdio.h>
#include <stdint.h>

void toggle_nth_bit(uint8_t *reg, uint8_t bit_position)
{
    if ((reg != NULL) && (bit_position < 8U))
    {
        *reg = (uint8_t)(*reg ^ (1U << bit_position));
    }
}

int main(void)
{
    uint8_t register_value = 0x08U;
    uint8_t bit_position = 3U;

    printf("Before toggling bit: 0x%02X\n", register_value);

    toggle_nth_bit(&register_value, bit_position);

    printf("After toggling bit %u: 0x%02X\n", bit_position, register_value);

    return 0;
}