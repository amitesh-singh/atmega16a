
#include "spi.h"

void spi_init()
{
   SPCR |= (1 << SPE) | (1 << MSTR);
   // Add SPI2X if you want more speed. f_osc/2
}

void spi_send(uint8_t data)
{
   SPDR = data;

   while (! (SPSR & (1 << SPIF)));
}
