#include <stdio.h>
#include <stdint.h>

void software_delay(uint32_t delay_count)
{
    volatile uint32_t i;

    for(i = 0U; i < delay_count; i++)
    {
        /* Empty loop for delay */
    }
}

int main(void)
{
    printf("Starting delay...\n");

    software_delay(500000000U);

    printf("Delay completed.\n");

    return 0;
}