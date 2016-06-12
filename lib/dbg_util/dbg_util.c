#include "dbg_util.h"

void blink_led(int8_t port, int8_t no)
{
   port |= (1 << no);
   _delay_ms(100);
   port &= ~(1 << no);
   _delay_ms(100);
}

