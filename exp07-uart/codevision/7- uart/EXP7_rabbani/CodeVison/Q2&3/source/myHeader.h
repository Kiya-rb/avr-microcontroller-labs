#ifndef _myHeader_INCLUDED_
#define _myHeader_INCLUDED_



#include <mega16.h>
#include <alcd.h>
#include <stdio.h>
#include <delay.h>
#include <stdlib.h>



interrupt [USART_RXC] void usart_rx_isr(void);
char getchar(void);
interrupt [USART_TXC] void usart_tx_isr(void);
void putchar(char c);

void q2(void);
void longText(char *text,int textLen,int delay);
void updateDisplay(char *text,int textLen);
void q3(void);


#endif
