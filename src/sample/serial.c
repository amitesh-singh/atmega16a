#include "uart.h"

//At 1 MHz, BAUD set to 2400 worked. 9600 did not work.
// http://wormfood.net/avrbaudcalc.php
// conceptually 4800 also should work
// fuse the atmega16a to 8mhz internal oscillator
// now i can use 9600UL and it works.
// sudo avrdude -c usbasp -p atmega16 ..
// fuse settings:-U lfuse:w:0xe4:m -U hfuse:w:0x99:m
#define BAUD 9600UL                           // define baud
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1)    // set baudrate value for UBRR

#ifndef F_CPU
#define F_CPU 8000000UL                    // set the CPU clock
#endif

// main function: entry point of program
int main (void)
{
   uart_init();
   DDRB |= (1 << PB0);

   while (1)
     {
        PORTB |= (1 << PB0);
        uart_print("LED ON\r\n");
        _delay_ms(1000);
        PORTB = 0x0;
        uart_print("LED OFF\r\n");
        _delay_ms(1000);
     }

   return 0;
}
