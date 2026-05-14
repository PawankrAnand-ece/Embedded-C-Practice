#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t adc_samples[5] = {120, 240, 360, 480, 600};

    uint16_t *ptr_adc;

    ptr_adc = adc_samples;

    printf("ADC Samples Using Pointer Arithmetic\n\n");

    for(uint8_t i = 0; i < 5; i++)
    {
        printf("Address: %p  Value: %u\n",
               (void *)ptr_adc,
               *ptr_adc);

        ptr_adc++;
    }

    return 0;
}