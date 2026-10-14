/*
 * ATmega16_Master.c
 * http://www.electronicwings.com
 */ 


#define F_CPU 8000000UL					/* Define CPU Frequency e.g. here its 8MHz */
#include <avr/io.h>						/* Include AVR std. library file */
#include <util/delay.h>					/* Include Delay header file */
#include <stdio.h>
#include <string.h>
#include "LCD_16x2_H_file.h"			/* Include LCD header file */
#include "SPI_Master_H_file.h"			/* Include SPI master header file */

int main(void)
{
	uint8_t count;
	char buffer[5];
	
	LCD_Init();
	SPI_Init();
	
	LCD_String_xy(1, 0, "Master Device");
	LCD_String_xy(2, 0, "Sending Data:    ");
	SS_Enable;
	count = 0;
	while (1)
	{
		SPI_Write(count);
		sprintf(buffer, "%d   ", count);
		LCD_String_xy(2, 13, buffer);
		count++;
		_delay_ms(500);
	}
		
}