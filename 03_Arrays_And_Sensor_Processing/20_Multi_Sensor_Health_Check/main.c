#include <stdio.h>
#include <stdint.h>

#define SENSOR_COUNT 4

#define MIN_VALID_VALUE 100
#define MAX_VALID_VALUE 900

void check_sensor_health(uint16_t sensor_data[], uint8_t size)
{
    uint8_t i;

    for(i = 0; i < size; i++)
    {
        printf("Sensor %u Value: %u -> ", i + 1, sensor_data[i]);

        if((sensor_data[i] < MIN_VALID_VALUE) || (sensor_data[i] > MAX_VALID_VALUE))
        {
            printf("FAULT\n");
        }
        else
        {
            printf("OK\n");
        }
    }
}

int main(void)
{
    uint16_t sensor_values[SENSOR_COUNT] = {
        512, 850, 95, 620
    };

    printf("Multi-Sensor Health Check\n\n");

    check_sensor_health(sensor_values, SENSOR_COUNT);

    return 0;
}