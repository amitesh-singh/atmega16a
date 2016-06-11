#ifndef _DBG_UTIL_H
#define _DBG_UTIL_H

#include <avr/io.h>
#include <util/delay.h>

// Usage: blink_led(PORTB, PB0, 100);
void blink_led(int8_t port, int8_t no, long timeout_ms);

#endif
