#include <myHeader.h>

void Q1(void){
char text[30];
int i = 0;
int adc_data =0;

//initialize adc
adc_without_int();

while(1){
    for(i = 0; i <= 7; i++){  
        lcd_gotoxy(0,0);
        adc_data = read_adc(i);
        delay_ms(600);
        sprintf(text,"adc [%d]= %d",i,adc_data);
        lcd_puts(text);    
    }

}



}