#include <mega16.h>
#include <alcd.h>
#include <stdio.h>
#include <delay.h>
#include <stdlib.h>
#include <glcd.h>

// Font used for displaying text
// on the graphic display
#include <font5x7.h>


void q3(void){
    char frame[7];
    int i = 0;

    int flag = 1;

    printf("part 3 is running... \r\n");
    printf("please enter a frame like the example: (12345) \r\n");

    while(flag){

        for(i = 0; i < 7; i++){
        frame[i] = getchar();
        putchar(frame[i]);
        }

        printf("\r\n");

        flag = 0;

        for(i = 1; i < 6; i++){

            if(frame[i] == ')'){
                flag = 1;
                lcd_clear();
                lcd_gotoxy(0,0);
                lcd_puts("Incorrect frame size");
                break;
            }

            else if (frame[i] < '0' || frame[i] > '9'){
                flag = 1;
                lcd_clear();
                lcd_gotoxy(0,0);
                lcd_puts("Frame must be 5 integer");
                break;
            }

        }

        if(frame[0] != '(' || frame[6] != ')'){
            flag = 1;
            lcd_clear();
            lcd_gotoxy(0,0);
            lcd_puts("Incorrect frame size");
        }
    }


    lcd_clear();
    lcd_gotoxy(0,0);
    lcd_puts("The frame is correct");


    printf("part 3 is ending...\r\n");

}