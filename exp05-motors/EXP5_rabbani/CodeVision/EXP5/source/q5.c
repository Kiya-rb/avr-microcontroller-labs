#include <myHeader.h>

int counter = 0;
int counter2 = 0;
int speed =0;

//Q5 clockwise
void Q5clockwise(void){

    if(counter%8 == 0){
        PORTB = 0x30;  
        delay_ms(20);
    }
     if(counter%8 == 2){
        PORTB = 0x60;  
        delay_ms(20);
    }
     if(counter%8 == 4){
        PORTB = 0xc0;  
        delay_ms(20);
    }
     if(counter%8 == 6){
        PORTB = 0x90;  
        delay_ms(20);
    }   
        
    counter++;
}

void Q5inv(void){

    if(counter%8 == 0){
        PORTB = 0xc0;  
        delay_ms(100);
    }
     if(counter%8 == 2){
        PORTB = 0x60;  
        delay_ms(100);
    }
     if(counter%8 == 4){
        PORTB = 0x30;  
        delay_ms(100);
    }
     if(counter%8 == 6){
        PORTB = 0x90;  
        delay_ms(100);
    }   
        
    counter++; 
}

void Q5(void){
    char text[20];
    int i = 0;          
    
    speed =  60/(0.127*(360/90)); 
    delay_ms(300);  
    
    if(counter2 < 30){
        Q5clockwise();
        sprintf(text,"speed :+%d",speed);
        counter2++;
    } 
    if(counter2 == 30)
       { 
       speed=0;        
       sprintf(text,"speed :%d",speed);  
       lcd_clear();
       lcd_puts(text);
       delay_ms(5000); 
       counter2++;
       } 
    
    if(counter2 > 30){
        Q5inv();
        sprintf(text,"speed :+%d",speed);
        counter2++;
    }

        
    lcd_gotoxy(0,0); 
    lcd_puts(text); 

}