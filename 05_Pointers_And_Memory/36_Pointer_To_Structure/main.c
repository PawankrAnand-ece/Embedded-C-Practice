#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint16_t temperature;
    uint16_t humidity;
    uint8_t sensor_status;

}Sensor_Data_t;

int main(void)
{
    Sensor_Data_t sensor1;

    Sensor_Data_t *ptr_sensor;

    sensor1.temperature = 35;
    sensor1.humidity = 62;
    sensor1.sensor_status = 1;

    ptr_sensor = &sensor1;

    printf("Sensor Information\n\n");

    printf("Temperature   : %u C\n",
           ptr_sensor->temperature);

    printf("Humidity      : %u %%\n",
           ptr_sensor->humidity);

    printf("Sensor Status : %u\n",
           ptr_sensor->sensor_status);

    return 0;
}