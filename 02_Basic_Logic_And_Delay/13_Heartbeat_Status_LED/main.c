#include <stdio.h>
#include <stdint.h>

void delay_loop(uint32_t delay_value)
{
    volatile uint32_t i;

    for(i = 0; i < delay_value; i++)
    {
    }
}

void heartbeat_led(void)
{
    printf("Heartbeat LED ON\n");

    delay_loop(80000000);

    printf("Heartbeat LED OFF\n");

    delay_loop(80000000);
}

int main(void)
{
    uint8_t cycle;

    printf("System Booted...\n\n");

    for(cycle = 0; cycle < 5; cycle++)
    {
        heartbeat_led();
    }

    printf("\nSystem Running Normally\n");

    return 0;
}