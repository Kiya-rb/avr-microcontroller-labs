#ifndef _mainHeader_INCLUDED_
#define _mainHeader_INCLUDED_


#include <mega16.h>
#include <delay.h>
#include <inputData.h>    //Q1
#include <writeDataInOutput.h>  //Q2
#include <Q3.h>  //Q3
#include <Q4.h>  //Q4
#include <Q5.h>  //Q5

char Q1(int in_port);
void Q2(char data,int outputPort);
void Q3(int repeats,int delay);
void Q4(int inputPort,int outputPort);
void Q5(int number,int enPort7seg,int outputPort7seg);

#define portA 1
#define portB 2
#define portC 3
#define portD 4

#endif
