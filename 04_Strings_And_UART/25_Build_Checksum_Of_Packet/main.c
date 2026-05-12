#include <stdio.h>
#include <stdint.h>

uint8_t calculate_checksum(const char *packet)
{
    uint8_t checksum = 0;

    while(*packet != '\0')
    {
        checksum = checksum + (uint8_t)(*packet);
        packet++;
    }

    return checksum;
}

int main(void)
{
    char packet[] = "ANAND";
    uint8_t checksum;

    checksum = calculate_checksum(packet);

    printf("Packet   : %s\n", packet);
    printf("Checksum : 0x%02X\n", checksum);

    return 0;
}