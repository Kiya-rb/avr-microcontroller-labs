#include <mainHeader.h>


/* Q1 */
char Q1(int in_port){

    char data;
    switch(in_port){
        case portA:
            data = PINA;
            break;
        case portB:
            data = PINB;
            break;
        case portC:
            data = PINC;
            break;
        case portD:
            data = PIND;
            break;
    }

    return data;
}