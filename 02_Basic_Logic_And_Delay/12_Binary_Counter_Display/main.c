#include <stdio.h>
#include <stdint.h>

void software_delay(uint32_t delay_count)
{
    volatile uint32_t i;

    for(i = 0U; i < delay_count; i++)
    {
        //
    }
}

void display_binary_4bit(uint8_t value)
{
    printf("Decimal: %02u | Binary: ", value);

    for(int8_t bit = 3; bit >= 0; bit--)
    {
        if(value & (1U << bit))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    printf("\n");
}

int main(void)
{
    printf("4-bit Binary Counter Started...\n\n");

    for(uint8_t count = 0U; count < 16U; count++)
    {
        display_binary_4bit(count);
        software_delay(50000000U);
    }

    printf("\nCounter Completed.\n");

    return 0;
}