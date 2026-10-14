#include <mainHeader.h>

/*  Q3
delay in ms  */

void Q3(int repeats,int delay){
    int i=0;    
    
    for(i = 0;i <= repeats;i++){
        Q2(0xff,portB);
        delay_ms(delay);
        Q2(0x00,portB);
        delay_ms(delay);
    }

}