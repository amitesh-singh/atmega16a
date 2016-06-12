#include "lcd.h"
#include <util/delay.h>

int main()
{
   lcd_init(LCD_DISP_ON_CURSOR); // initialize lcd, display on,

   while (1)
     {
        lcd_clrscr();
        lcd_home();
        lcd_puts("Hello");
        lcd_gotoxy(0, 1);
        lcd_puts(" ami");
        _delay_ms(50);
     }
   return 0;
}
