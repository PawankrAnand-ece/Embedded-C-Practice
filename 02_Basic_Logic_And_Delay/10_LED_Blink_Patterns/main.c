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

void normal_blink(void)
{
    printf("NORMAL MODE LED ON\n");
    software_delay(100000000U);

    printf("NORMAL MODE LED OFF\n");
    software_delay(100000000U);
}

void fast_blink(void)
{
    printf("FAULT MODE LED ON\n");
    software_delay(30000000U);

    printf("FAULT MODE LED OFF\n");
    software_delay(30000000U);
}

int main(void)
{
    printf("Starting LED Pattern Simulation...\n\n");

    normal_blink();

    printf("\n");

    fast_blink();

    printf("\nPattern simulation completed.\n");

    return 0;
}