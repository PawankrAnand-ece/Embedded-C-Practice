#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define COMMAND_SIZE 16

int main(void)
{
    char packet[] = "SET:25";
    char command[COMMAND_SIZE];

    char *separator;
    uint16_t value;

    separator = strchr(packet, ':');

    if(separator != NULL)
    {
        uint8_t length;

        length = (uint8_t)(separator - packet);

        if(length < COMMAND_SIZE)
        {
            strncpy(command, packet, length);
            command[length] = '\0';

            value = (uint16_t)atoi(separator + 1);

            printf("Packet  : %s\n", packet);
            printf("Command : %s\n", command);
            printf("Value   : %u\n", value);
        }
        else
        {
            printf("Command too long\n");
        }
    }
    else
    {
        printf("Invalid packet format\n");
    }

    return 0;
}