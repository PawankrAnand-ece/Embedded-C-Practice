#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t sensor_value = 350;

    uint16_t *ptr_sensor;

    ptr_sensor = &sensor_value;

    printf("Sensor Value          : %u\n", sensor_value);

    printf("Sensor Address        : %p\n",
           (void *)&sensor_value);

    printf("Pointer Stored Address: %p\n",
           (void *)ptr_sensor);

    printf("Value Using Pointer   : %u\n",
           *ptr_sensor);

    return 0;
}