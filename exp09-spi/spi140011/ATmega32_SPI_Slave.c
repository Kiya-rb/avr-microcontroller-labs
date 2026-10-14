/*
 * ATmega32_SPI_Slave.c
 * http://www.electronicwings.com
 */ 


#define F_CPU 8000000UL					/* Define CPU Frequency e.g. here its 8MHz */
#include <avr/io.h>						/* Include AVR std. library file */
#include <util/delay.h>					/* Include Delay header file */
#include <stdio.h>
#include <string.h>						/* Include string header file */
#include "LCD_16x2_H_file.h"			/* Include LCD header file */
#include "SPI_Slave_H_file.h"			/* Include SPI slave header file */

int main(void)
{
	uint8_t count;
	char buffer[5];
	
	LCD_Init();
	SPI_Init();
	
	LCD_String_xy(1, 0, "Slave Device");
	LCD_String_xy(2, 0, "Receive Data:    ");
	while (1)
	{
		count = SPI_Receive();
		sprintf(buffer, "%d   ", count);
		LCD_String_xy(2, 13, buffer);
	}

}