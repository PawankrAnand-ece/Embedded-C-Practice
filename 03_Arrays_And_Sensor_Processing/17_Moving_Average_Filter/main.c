#include <stdio.h>
#include <stdint.h>

#define WINDOW_SIZE 3
#define SAMPLE_COUNT 8

uint16_t moving_average(uint16_t data[], uint8_t start_index)
{
    uint32_t sum = 0;
    uint8_t i;

    for(i = 0; i < WINDOW_SIZE; i++)
    {
        sum += data[start_index + i];
    }

    return (uint16_t)(sum / WINDOW_SIZE);
}

int main(void)
{
    uint16_t sensor_data[SAMPLE_COUNT] = {
        500, 520, 510, 530,
        515, 505, 525, 510
    };

    uint8_t i;
    uint16_t avg;

    printf("Moving Average Output:\n");

    for(i = 0; i <= (SAMPLE_COUNT - WINDOW_SIZE); i++)
    {
        avg = moving_average(sensor_data, i);
        printf("Window %u Average: %u\n", i + 1, avg);
    }

    return 0;
}