#include <myHeader.h>

int dataL,dataH,data1,data2,rpm = 0,T;
int flag1=0,flag2=1;

//Q6
void Q6(void){
    char text[20];
    
    dataL = ICR1L;
    dataH = ICR1H;
    
    if (flag1 == 0){
        data1=dataH<<8|dataL; 
        flag2=0;    
    }
    
    if(flag2==0)
    {
        data2=dataH<<8|dataL;
        flag1=0;
    }

    if(flag1!=0 && flag2!=0)
    {
        T=(data2-data1)*1000;
        rpm=T*50;
    }
    
    lcd_gotoxy(0,1);
    sprintf(text,"%d",rpm);
    lcd_puts(text); 

}