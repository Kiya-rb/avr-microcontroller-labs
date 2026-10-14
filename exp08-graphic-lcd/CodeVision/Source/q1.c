#include <.\Source\myHeaders.h>

 char b[8] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

const unsigned short KandR[] = {
        0x00, 0xFF, 0x18, 0x24, 0x42, 0x81, 0x00, 0x00,
        0x00, 0xFF, 0x19, 0x39, 0x69, 0xCF, 0x00, 0x00
        };


void q1_dotMatrix(void){
    int delay = 2;
    int i;
    int j;
    int t;
    int c;
    int main;
    int l;
    DDRD.7 = 1;


    for(j=0;j<50;j++)
    {

        PORTD.7 = 1;
        for (i = 0; i < 8; i++)
        {
        PORTB = ~KandR[i];
        delay_ms(delay);
        PORTA = b[i];
        delay_ms(1);
        }
        PORTD.7 = 0;
        for (i = 0; i < 8; i++)
        {
        PORTB = ~KandR[i+8];
        delay_ms(delay);
        PORTA = b[i];
        delay_ms(1);
        }

    }


    for(main = 0; main<3; main++){
        for ( j = 0; j < 16; j++)
        {
            for(l = 0; l < 5; l++){

                delay_ms(10);
                PORTD.7 = 1;
                for ( i = 0; i < 8; i++)
                {
                    if(i - j < 0)
                            PORTB = ~KandR[i - j + 16];
                        else
                            PORTB = ~KandR[i - j];
                    delay_ms(1);
                    PORTA = b[i];

                    delay_ms(1);
                }

                c = 0;
                PORTD.7 = 0;
                for ( t = i - j; t < 16 - j; t++)
                {
                    if(t < 0)
                            PORTB = ~KandR[t + 16];
                        else
                            PORTB = ~KandR[t];
                    delay_ms(1);
                    PORTA = b[c];
                    c++;

                    delay_ms(1);
                }

            }


        }

    }

}