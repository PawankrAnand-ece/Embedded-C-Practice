#include <stdio.h>
#include <stdint.h>

#define BUFFER_SIZE 8

char rx_buffer[BUFFER_SIZE];

uint8_t head = 0;
uint8_t tail = 0;
uint8_t overflow_flag = 0;

uint8_t next_position(uint8_t position)
{
    position++;

    if(position >= BUFFER_SIZE)
    {
        position = 0;
    }

    return position;
}

void buffer_write(char data)
{
    uint8_t next_head;

    next_head = next_position(head);

    if(next_head == tail)
    {
        overflow_flag = 1;
        printf("Buffer Overflow! Data lost: %c\n", data);
    }
    else
    {
        rx_buffer[head] = data;
        head = next_head;

        printf("Stored: %c | Head: %u\n", data, head);
    }
}

int main(void)
{
    char uart_data[] = "ABCDEFGHIJK";
    uint8_t i;

    printf("UART Buffer Overflow Detection\n\n");

    for(i = 0; uart_data[i] != '\0'; i++)
    {
        buffer_write(uart_data[i]);
    }

    if(overflow_flag)
    {
        printf("\nFinal Status: Overflow Detected\n");
    }
    else
    {
        printf("\nFinal Status: No Overflow\n");
    }

    return 0;
}