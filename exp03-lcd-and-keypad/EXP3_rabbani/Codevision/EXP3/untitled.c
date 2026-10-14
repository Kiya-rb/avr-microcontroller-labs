#include <myHeader.h>


void Q5(void){
    lcd_clear(); 
    lcd_gotoxy(0,0); 
    getSpeed();    


}

void getSpeed(int x){
    int i=0;
    lcd_puts("Speed:??(0-50r)");
    for(i = 0 ; i < 2 ; i++){
        lcd_putchar(getkey());
    }
}

char getKey(void){
    char data=0;
    char data_key[]={
                    '7','8','9','A',
                    '4','5','6','B',
                    '1','2','3','C',
                    '*','0','#','D'}; 

    //lcd_clear();                
    //lcd_gotoxy(0,0); 

    while(1){
        data = keypad2();
        if(data!=100)   
            return data;   
        }
}

