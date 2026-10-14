/*Master Program*/

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
    SPI_Master_Init();
    lcd_gotoxy(0,0);
    lcd_puts("Master Device");
    lcd_gotoxy(0,1);
    lcd_puts("Sending:  ");

    SS_Enable;
    count = 0;
    while (1)
    {
        SPI_Master_Write(count);
        sprintf(buffer, "%d   ", count);
        lcd_gotoxy(10,1);
        lcd_puts(buffer);
        count++;
        delay_ms(500);
    }

}