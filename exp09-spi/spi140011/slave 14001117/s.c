/* Slave program*/

#include <mega32.h>
#include <alcd.h>
#include <delay.h>
#include <stdio.h>
#include "SPI_H_files.h"

void main(void)
{
  	char count;
	char buffer[5];

	lcd_init(16);
	SPI_Slave_Init();


    lcd_gotoxy(0,0);
    lcd_puts("Slave Device");
    lcd_gotoxy(0,1);
    lcd_puts("Receive:");

	while (1)
	{
		count = SPI_Slave_Receive();
		sprintf(buffer, "%d   ", count);
		lcd_gotoxy(13,1);
        lcd_puts(buffer);
	}

}


