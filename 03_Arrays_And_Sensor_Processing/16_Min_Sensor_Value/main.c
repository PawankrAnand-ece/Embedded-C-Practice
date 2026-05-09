#include <stdio.h>
#include <stdint.h>

#define SAMPLE_COUNT 8

uint16_t find_min_value(uint16_t data[], uint8_t size)
{
    uint16_t min;
    uint8_t i;

    min = data[0];

    for(i = 1; i < size; i++)
    {
        if(data[i] < min)
        {
            min = data[i];
        }
    }

    return min;
}

int main(void)
{
    uint16_t sensor_data[SAMPLE_COUNT] = {
        412, 398, 450, 425,
        470, 430, 455, 440
    };

    uint16_t min_value;

    min_value = find_min_value(sensor_data, SAMPLE_COUNT);

    printf("Minimum Sensor Value: %u\n", min_value);

    return 0;
}