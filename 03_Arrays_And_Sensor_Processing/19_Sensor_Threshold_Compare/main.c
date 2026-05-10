#include <stdio.h>
#include <stdint.h>

#define SENSOR_THRESHOLD 600

void check_sensor_limit(uint16_t sensor_value)
{
    if(sensor_value >= SENSOR_THRESHOLD)
    {
        printf("Alert: Threshold crossed\n");
    }
    else
    {
        printf("Sensor value normal\n");
    }
}

int main(void)
{
    uint16_t sensor_value = 650;

    printf("Sensor Value: %u\n", sensor_value);

    check_sensor_limit(sensor_value);

    return 0;
}