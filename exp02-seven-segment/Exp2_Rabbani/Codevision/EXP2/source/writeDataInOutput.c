#include <mainHeader.h>

/* Q2 */

void Q2(char data,int outputPort){
    
    switch(outputPort){
        case portA:
            PORTA = data;
            break;
        case portB:
            PORTB = data;
            break;
        case portC:
            PORTC = data;
            break;
        case portD:
            PORTD = data;
            break;
    }

}