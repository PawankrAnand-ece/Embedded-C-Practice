#include <stdio.h>
#include <stdint.h>

#define SAMPLE_COUNT 10

uint16_t find_max_value(uint16_t data[], uint8_t size)
{
    uint16_t max;
    uint8_t i;

    max = data[0];

    for(i = 1; i < size; i++)
    {
        if(data[i] > max)
        {
            max = data[i];
        }
    }

    return max;
}

int main(void)
{
    uint16_t sensor_data[SAMPLE_COUNT] = {
        412, 398, 450, 425, 0,
        479, 430, 455, 440, 451
    };

    uint16_t max_value;

    max_value = find_max_value(sensor_data, SAMPLE_COUNT);

    printf("Maximum Sensor Value: %u\n", max_value);

    return 0;
}