#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>


void uart_init(void);
void uart_transmit(unsigned char);
unsigned char uart_recieve(void);
