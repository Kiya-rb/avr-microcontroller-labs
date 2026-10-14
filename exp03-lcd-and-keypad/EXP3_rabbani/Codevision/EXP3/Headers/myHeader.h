#ifndef _myHeader_INCLUDED_
#define _myHeader_INCLUDED_

#include <mega16.h>
#include <delay.h>
#include <Q1.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <Q2.h>
#include <Q1.h>
#include <Q3.h>
#include <Q4.h>
#include <Q5.h>

// Alphanumeric LCD functions
#include <alcd.h>


void updateDisplay(char *text,int textLen);
char keypad2(void);
int getSpeed(void);
int getTime(void);
int getW(void);
int getTemp(void);
char getKey(void);
int convertCharToInt(char input[2]);
interrupt [EXT_INT1] void Q4(void);



#endif
