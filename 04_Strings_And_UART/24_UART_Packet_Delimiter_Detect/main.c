#include <stdio.h>
#include <stdint.h>

#define RX_BUFFER_SIZE 32

int main(void)
{
    char uart_stream[] = "abc<LEDON>xyz";
    char rx_buffer[RX_BUFFER_SIZE];

    uint8_t index = 0;
    uint8_t packet_active = 0;

    printf("UART Stream Scanning Started\n\n");

    for(uint8_t i = 0; uart_stream[i] != '\0'; i++)
    {
        char byte = uart_stream[i];

        if(byte == '<')
        {
            packet_active = 1;
            index = 0;
            printf("Start delimiter detected\n");
        }
        else if(byte == '>')
        {
            packet_active = 0;
            rx_buffer[index] = '\0';

            printf("End delimiter detected\n");
            printf("Received Packet: %s\n", rx_buffer);
        }
        else
        {
            if(packet_active)
            {
                if(index < (RX_BUFFER_SIZE - 1))
                {
                    rx_buffer[index] = byte;
                    index++;
                }
            }
        }
    }

    return 0;
}