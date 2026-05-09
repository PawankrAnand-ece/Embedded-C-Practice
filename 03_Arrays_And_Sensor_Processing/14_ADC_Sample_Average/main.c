#include <stdio.h>
#include <stdint.h>

#define SAMPLE_COUNT 10

uint16_t get_average_adc(uint16_t samples[], uint8_t size)
{
    uint32_t sum = 0;
    uint8_t i;

    for(i = 0; i < size; i++)
    {
        sum += samples[i];
    }

    return (uint16_t)(sum / size);
}

int main(void)
{
    uint16_t adc_samples[SAMPLE_COUNT] = {
        512, 518, 515, 510, 520,
        516, 514, 519, 513, 517
    };

    uint16_t avg_value;

    avg_value = get_average_adc(adc_samples, SAMPLE_COUNT);

    printf("ADC Average Value: %u\n", avg_value);

    return 0;
}