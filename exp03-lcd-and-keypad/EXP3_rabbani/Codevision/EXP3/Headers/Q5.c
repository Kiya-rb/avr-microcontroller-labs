#include <myHeader.h>

char data_key[]={
                    '7','8','9','A',
                    '4','5','6','B',
                    '1','2','3','C',
                    '*','0','#','D'}; 
                    


void Q5(void){
    int number = 0;
    
    lcd_clear(); 
    lcd_gotoxy(0,0); 
    
    number = getSpeed(); 
    while(number > 50 || number < 0){                                  
        lcd_gotoxy(6,0);
        lcd_puts("EE"); 
        delay_ms(500);                            
        number = getSpeed();  
    }     
    
    number = getTime();
    while(number > 99 || number < 0){
        lcd_gotoxy(5,0);
        lcd_puts("EE"); 
        delay_ms(500);                            
        number = getTime();
    
    
    }     
    
    number = getW();
    while(number > 99 || number < 0){
        lcd_gotoxy(2,0);
        lcd_puts("EE"); 
        delay_ms(500);                            
        number = getW();
    }
    
    
    number = getTemp();
    while(number > 80 || number < 20){
        lcd_gotoxy(5,0);
        lcd_puts("EE"); 
        delay_ms(500);                            
        number = getTemp();
    }  
    
    lcd_clear();
    lcd_puts("End");

}

int getW(void){
   int i=0;    
    int number = 0;
    char data = 0; 
    lcd_clear();
    lcd_puts("W:??(0-99Kg)"); 
    
    for(i = 0 ; i < 2 ; i++){
        lcd_gotoxy(i+2,0);   
        data = getKey();
        lcd_putchar(data_key[data]);
        number = number*10 + (data_key[data] - '0');   
    } 
    return number; 

}
       
int getTemp(void){
   int i=0;    
    int number = 0;
    char data = 0; 
    lcd_clear();
    lcd_puts("Temp:??(20-80C)"); 
    
    for(i = 0 ; i < 2 ; i++){
        lcd_gotoxy(i+5,0);   
        data = getKey();
        lcd_putchar(data_key[data]);
        number = number*10 + (data_key[data] - '0');   
    } 
    return number; 

}


int getSpeed(void){
    int i=0;    
    int number = 0;
    char data = 0; 
    lcd_clear();
    lcd_puts("Speed:??(0-50r)"); 
    
    for(i = 0 ; i < 2 ; i++){
        lcd_gotoxy(i+6,0);   
        data = getKey();
        lcd_putchar(data_key[data]);
        number = number*10 + (data_key[data] - '0');   
    } 
    return number;
}    
     
int getTime(void){
    int i=0;    
    int number = 0;
    char data = 0; 
    lcd_clear();
    lcd_puts("Time:??(0-99s)");  
    
    for(i = 0 ; i < 2 ; i++){
        lcd_gotoxy(i+5,0);   
        data = getKey();
        lcd_putchar(data_key[data]);
        number = number*10 + (data_key[data] - '0');   
    } 
    return number;
}


char getKey(void){
    char data = 10;
    
    while(1){
        data = keypad2();
        if(data!=100)   
            return data;   
        }
}

