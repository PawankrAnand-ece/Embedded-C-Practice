#include <stdio.h>
#include <stdint.h>

#define RX_BUFFER_SIZE 32

void uart_receive_byte(char rx_buffer[], uint8_t *index, char received_byte)
{
    if(*index < (RX_BUFFER_SIZE - 1))
    {
        rx_buffer[*index] = received_byte;
        (*index)++;
        rx_buffer[*index] = '\0';
    }
}

int main(void)
{
    char rx_buffer[RX_BUFFER_SIZE];
    uint8_t rx_index = 0;

    char incoming_data[] = "PAWAN KUMAR ANAND";
    uint8_t i;

    rx_buffer[0] = '\0';

    printf("Receiving UART data byte by byte...\n\n");

    for(i = 0; incoming_data[i] != '\0'; i++)
    {
        uart_receive_byte(rx_buffer, &rx_index, incoming_data[i]);

        printf("Received Byte: %c | Buffer: %s\n", incoming_data[i], rx_buffer);
    }

    printf("\nFinal Received Command: %s\n", rx_buffer);

    return 0;
}