#include <stdio.h>
#include <stdint.h>

#define BUFFER_SIZE 8

char circular_buffer[BUFFER_SIZE];

uint8_t head = 0;
uint8_t tail = 0;

void buffer_write(char data)
{
    circular_buffer[head] = data;

    head++;

    if(head >= BUFFER_SIZE)
    {
        head = 0;
    }
}

char buffer_read(void)
{
    char data;

    data = circular_buffer[tail];

    tail++;

    if(tail >= BUFFER_SIZE)
    {
        tail = 0;
    }

    return data;
}

int main(void)
{
    char uart_data[] = "ABCDEFG";
    uint8_t i;

    printf("Writing into Circular Buffer:\n\n");

    for(i = 0; uart_data[i] != '\0'; i++)
    {
        buffer_write(uart_data[i]);

        printf("Stored: %c | Head: %u\n",
               uart_data[i],
               head);
    }

    printf("\nReading from Circular Buffer:\n\n");

    for(i = 0; i < 7; i++)
    {
        printf("Read: %c | Tail: %u\n",
               buffer_read(),
               tail);
    }

    return 0;
}