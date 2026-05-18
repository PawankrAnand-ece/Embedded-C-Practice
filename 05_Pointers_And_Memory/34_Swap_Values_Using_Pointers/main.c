#include <stdio.h>
#include <stdint.h>

void swap_values(uint16_t *value1, uint16_t *value2)
{
    uint16_t temp;

    temp = *value1;

    *value1 = *value2;

    *value2 = temp;
}

int main(void)
{
    uint16_t sensor_A = 120;
    uint16_t sensor_B = 450;

    printf("Before Swap\n");
    printf("Sensor A : %u\n", sensor_A);
    printf("Sensor B : %u\n\n", sensor_B);

    swap_values(&sensor_A, &sensor_B);

    printf("After Swap\n");
    printf("Sensor A : %u\n", sensor_A);
    printf("Sensor B : %u\n", sensor_B);

    return 0;
}