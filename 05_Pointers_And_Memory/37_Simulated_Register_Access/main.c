#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t GPIO_OUTPUT_REGISTER = 0x00000000;

    volatile uint32_t *ptr_gpio_reg;

    ptr_gpio_reg = &GPIO_OUTPUT_REGISTER;

    printf("Initial Register Value : 0x%08X\n",
           GPIO_OUTPUT_REGISTER);

    *ptr_gpio_reg |= (1 << 3);

    printf("After Setting Bit 3    : 0x%08X\n",
           GPIO_OUTPUT_REGISTER);

    *ptr_gpio_reg &= ~(1 << 3);

    printf("After Clearing Bit 3   : 0x%08X\n",
           GPIO_OUTPUT_REGISTER);

    return 0;
}