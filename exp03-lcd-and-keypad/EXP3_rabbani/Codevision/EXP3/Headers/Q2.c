#include <myHeader.h>

//Moving text in Alphanumeric LCD
int iCursor = 0;

void Q2(char *text,int textLen,int delay){
lcd_clear();
while(1){
    updateDisplay(text,textLen);  
    delay_ms(delay);
    }
}

void updateDisplay(char *text,int textLen){
    int i = 0;
    int line = 1;
    int iChar;

    if(iCursor == textLen - 1)
        iCursor = 0;
        
    lcd_gotoxy(0,line);

    
    if (iCursor < (textLen - 16)){
        for(iChar = iCursor ; iChar < iCursor + 16; iChar++){
            lcd_putchar(text[iChar]);   
        }    
    }
    else{
        for(iChar = iCursor ; iChar < (textLen); iChar++){
            lcd_putchar(text[iChar]);                         
        }
    }

    iCursor++;
}