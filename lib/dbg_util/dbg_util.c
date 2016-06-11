#include "dbg_util.h"

void blink_led(int8_t port, int8_t no,
               long timeout)
{
   port |= (1 << no);
   _delay_ms(timeout);
   port &= ~(1 << no);
   _delay_ms(timeout);
}

