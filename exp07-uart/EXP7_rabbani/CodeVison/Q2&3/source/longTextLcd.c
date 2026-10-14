#include <myHeader.h>

//Moving text in Alphanumeric LCD
int iCursor = 0;

void longText(char *text,int textLen,int delay){
    int i;
    lcd_clear();



    for(i = 0; i<= textLen; i++){
        updateDisplay(text,textLen);
        delay_ms(delay);
    }
}

void updateDisplay(char *text,int textLen){
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