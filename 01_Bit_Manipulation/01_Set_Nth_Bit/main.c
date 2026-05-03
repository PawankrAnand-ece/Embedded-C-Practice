#include <stdio.h>
#include <stdint.h>
void set_nth_bit(uint8_t *reg, uint8_t bit_position)
{
    if ((reg != NULL) && (bit_position < 8U))
    {
        *reg = (uint8_t)(*reg | (1U << bit_position));
    }
}

int main(void)
{
    uint8_t register_value = 0x00U;
    uint8_t bit_position = 3U;

    printf("Before setting bit: 0x%02X\n", register_value);

    set_nth_bit(&register_value, bit_position);

    printf("After setting bit %u: 0x%02X\n", bit_position, register_value);

    return 0;
}
