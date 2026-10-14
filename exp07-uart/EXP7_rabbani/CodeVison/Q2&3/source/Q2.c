#include <myHeader.h>

void q2(void){
    char text[30];
    char data;
    printf("part 2 is running... \r\n");

    while(1){
        data = getchar();

        if(data >= '0' && data <= '9'){
            int number = (data - '0')*10;
            sprintf(text,"%d",number);
            lcd_gotoxy(0,0);
            lcd_clear();
            lcd_puts(text);
        }

        else if( data == 'D'){
            lcd_clear();
            lcd_puts("LCD Deleted!");
        }

        else if (data == 'H'){
            lcd_gotoxy(0,0);
            longText("***********************Micro processor lab ***********************",66,100);
        }

        else if ( data == 'E'){
            printf("part 2 is ending... \r\n");
            lcd_clear();
            break;
        }

        else {
            lcd_clear();
            lcd_gotoxy(0,0);
            lcd_putchar(data);
        }


    }



}