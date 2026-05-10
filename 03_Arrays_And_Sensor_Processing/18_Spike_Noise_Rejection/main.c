#include <stdio.h>
#include <stdint.h>

#define SAMPLE_COUNT 8
#define SPIKE_LIMIT 50

void remove_spikes(uint16_t data[], uint8_t size)
{
    uint8_t i;

    for(i = 1; i < size; i++)
    {
        if(data[i] > (data[i - 1] + SPIKE_LIMIT))
        {
            data[i] = data[i - 1];
        }
    }
}

int main(void)
{
    uint16_t sensor_data[SAMPLE_COUNT] = {
        512, 515, 518, 900,
        516, 514, 517, 519
    };

    uint8_t i;

    printf("Filtered Sensor Data:\n");

    remove_spikes(sensor_data, SAMPLE_COUNT);

    for(i = 0; i < SAMPLE_COUNT; i++)
    {
        printf("%u ", sensor_data[i]);
    }

    printf("\n");

    return 0;
}