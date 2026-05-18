#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t adc_samples[5] = {100, 200, 300, 400, 500};

    uint16_t *ptr_adc;

    ptr_adc = adc_samples;

    printf("ADC Samples Using Pointer Access\n\n");

    for(uint8_t i = 0; i < 5; i++)
    {
        printf("Sample %u = %u\n",
               i,
               *(ptr_adc + i));
    }

    return 0;
}