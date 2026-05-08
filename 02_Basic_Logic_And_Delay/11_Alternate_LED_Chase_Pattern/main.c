#include <stdio.h>
#include <stdint.h>

void software_delay(uint32_t delay_count)
{
    volatile uint32_t i;

    for(i = 0U; i < delay_count; i++)
    {
        /* Empty loop */
    }
}

void display_led_pattern(uint8_t pattern)
{
    printf("LED Pattern: 0x%02X\n", pattern);
}

int main(void)
{
    uint8_t led_pattern;

    printf("Starting LED Chase Pattern...\n\n");

    /* Left to Right */
    for(led_pattern = 0x01U; led_pattern <= 0x08U; led_pattern <<= 1U)
    {
        display_led_pattern(led_pattern);

        software_delay(100000000U);
    }

    printf("\nReverse Direction...\n\n");

    /* Right to Left */
    for(led_pattern = 0x08U; led_pattern >= 0x01U; led_pattern >>= 1U)
    {
        display_led_pattern(led_pattern);

        software_delay(100000000U);

        if(led_pattern == 0x01U)
        {
            break;
        }
    }

    printf("\nPattern Completed.\n");

    return 0;
}