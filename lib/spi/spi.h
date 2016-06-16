#ifndef __SPI_H
#define __SPI_H

#include "avr/io.h"

void spi_init();

void spi_send(uint8_t data);

#endif
