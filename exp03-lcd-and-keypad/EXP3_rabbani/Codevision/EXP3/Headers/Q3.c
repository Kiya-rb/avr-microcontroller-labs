#include <myHeader.h>

//Matrix keypad 

void Q3(void){
char data=0;

char data_key[]={
                '7','8','9','A',
                '4','5','6','B',
                '1','2','3','C',
                '*','0','#','D'}; 

lcd_clear();                
lcd_gotoxy(0,0); 
while(1){
    data = keypad2();
    if(data!=100)   
        lcd_putchar(data_key[data]);
    //delay_ms(250);
    }
}

char keypad2(void)
{
    char key=100;
    char row[4]={0x10,0x20,0x40,0x80};
    int c;
    int r;  
    
    for (r=0;r<4;r++){
        PORTB=row[r]; 
        c=20;
        delay_ms(5);
        if (PINB.0==1) c=0;
        if (PINB.1==1) c=1;
        if (PINB.2==1) c=2;
        if (PINB.3==1) c=3;
        if (!(c==20)){
            key=(r*4)+c;                                                                                                                       
            while (PINB.0==1) {}
            PORTB=0xf0;
            while (PINB.1==1) {}
            while (PINB.2==1) {}
            while (PINB.3==1) {}
        }
        PORTB=0xf0;
    }    
    
    return key;
}