/*
 * EXP2.c
 *
 * Created: 10/6/2022 5:36:51 PM
 * Author: rabba
 */

//#include <mega16.h>
//#include <delay.h>

#include <mainHeader.h>

void main(void)
{
char data=0;

DDRA=0x00;
DDRB=0xFF;
DDRC=0xFF;
DDRD=0xFF;

//my Functions

data = Q1(portA);
delay_ms(1000);

Q2(data,portB);
delay_ms(1000);

Q3(10,500);
delay_ms(5000);

Q4(portA,portB);
delay_ms(1000);

Q5(350,portD,portC);

}

