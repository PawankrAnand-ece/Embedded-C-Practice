#include <stdio.h>
#include <stdint.h>

void update_sensor_value(uint16_t *sensor_ptr)
{
    *sensor_ptr = 850;
}

int main(void)
{
    uint16_t sensor_data = 320;

    printf("Before Function Call : %u\n", sensor_data);

    update_sensor_value(&sensor_data);

    printf("After Function Call  : %u\n", sensor_data);

    return 0;
}