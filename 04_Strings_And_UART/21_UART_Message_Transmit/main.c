#include <stdio.h>

void uart_send_string(const char *message)
{
    while(*message != '\0')
    {
        putchar(*message);
        message++;
    }
}

int main(void)
{
    uart_send_string("System Boot Successful\n");

    return 0;
}