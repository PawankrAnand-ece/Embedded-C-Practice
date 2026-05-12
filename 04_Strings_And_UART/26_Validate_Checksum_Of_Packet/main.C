#include <stdio.h>
#include <stdint.h>

uint8_t calculate_checksum(const char *packet)
{
    uint8_t checksum = 0;

    while(*packet != '\0')
    {
        checksum += (uint8_t)(*packet);
        packet++;
    }

    return checksum;
}

int main(void)
{
    char packet[] = "ANAND";

    uint8_t received_checksum = 0x62;
    uint8_t calculated_checksum;

    calculated_checksum = calculate_checksum(packet);

    printf("Packet              : %s\n", packet);
    printf("Received Checksum   : 0x%02X\n", received_checksum);
    printf("Calculated Checksum : 0x%02X\n\n", calculated_checksum);

    if(received_checksum == calculated_checksum)
    {
        printf("Packet Status : VALID\n");
    }
    else
    {
        printf("Packet Status : CORRUPTED\n");
    }

    return 0;
}