#include <stdio.h>
#include <stdint.h>

#define RX_BUFFER_SIZE 32
#define TIMEOUT_LIMIT 5

int main(void)
{
    char uart_stream[] = "abc<LEDON";
    char rx_buffer[RX_BUFFER_SIZE];

    uint8_t index = 0;
    uint8_t packet_active = 0;
    uint8_t timeout_counter = 0;

    printf("UART Packet Timeout Handling\n\n");

    for(uint8_t i = 0; uart_stream[i] != '\0'; i++)
    {
        char byte = uart_stream[i];

        if(byte == '<')
        {
            packet_active = 1;
            index = 0;
            timeout_counter = 0;
            printf("Packet started\n");
        }
        else if(byte == '>')
        {
            packet_active = 0;
            rx_buffer[index] = '\0';
            printf("Packet completed: %s\n", rx_buffer);
        }
        else
        {
            if(packet_active)
            {
                if(index < (RX_BUFFER_SIZE - 1))
                {
                    rx_buffer[index] = byte;
                    index++;
                    timeout_counter++;
                }

                if(timeout_counter >= TIMEOUT_LIMIT)
                {
                    packet_active = 0;
                    index = 0;
                    printf("Packet timeout. Buffer cleared.\n");
                }
            }
        }
    }

    return 0;
}