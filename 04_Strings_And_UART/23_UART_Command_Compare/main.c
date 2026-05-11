#include <stdio.h>
#include <stdint.h>
#include <string.h>

void process_command(const char *command)
{
    if(strcmp(command, "LEDON") == 0)
    {
        printf("Command Matched : LEDON\n");
        printf("LED Status      : ON\n");
    }
    else if(strcmp(command, "LEDOFF") == 0)
    {
        printf("Command Matched : LEDOFF\n");
        printf("LED Status      : OFF\n");
    }
    else if(strcmp(command, "RESET") == 0)
    {
        printf("Command Matched : RESET\n");
        printf("System Reset Triggered\n");
    }
    else
    {
        printf("Invalid UART Command\n");
    }
}

int main(void)
{
    char rx_buffer[32] = "LEDON";

    printf("Received UART Packet : %s\n\n", rx_buffer);

    process_command(rx_buffer);

    return 0;
}