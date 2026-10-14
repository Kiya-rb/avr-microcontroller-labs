#include <myHeaders.h>

void q3(void){
    int h=20,m=10,s=15;


    while(1){

    delay_ms(300);
    glcd_clear();

    s++;
        if(s == 60)
        {
            m++;
            s = 0;
        }
        if(m == 60)
        {
            h++;
            m = 0;
        }
        if(h == 12){
            h = 0;

        }

        Draw_clock(h,m,s);

    }

}