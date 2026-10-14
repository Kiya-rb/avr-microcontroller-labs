#include <mainHeader.h>

/* Q5 */                

void Q5(int number,int enPort7seg,int outputPort7seg){
    char digit[]={0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D,
    0x07, 0x7F, 0x6F}; 
       
    int yekan = 0;
    int dahgan = 0;
    int sadgan = 0;
    int hezargan = 0;
       
    yekan = number%10;
    number = number/10;
       
    dahgan = number%10;  
    number = number/10;
       
    sadgan = number%10;  
    number = number/10;
       
    hezargan = number%10;  
    number = number/10; 
        
    while(1){       
       switch(enPort7seg){
            case portA:
                switch(outputPort7seg){
                    case portB:   
                        PORTA.0 = 0;
                        Q2(digit[hezargan],portB);
                        delay_ms(20);
                        PORTA.0 = 1;

                        PORTA.1 = 0;
                        Q2(digit[sadgan],portB);
                        delay_ms(20);
                        PORTA.1 = 1;

                        PORTA.2 = 0;
                        Q2(digit[dahgan],portB);
                        delay_ms(20);
                        PORTA.2 = 1;

                        PORTA.3 = 0;
                        Q2(digit[yekan],portB);
                        delay_ms(20);
                        PORTA.3 = 1;
                    break;

                    case portC:
                        PORTA.0 = 0;
                        Q2(digit[hezargan],portC);
                        delay_ms(20);
                        PORTA.0 = 1;

                        PORTA.1 = 0;
                        Q2(digit[sadgan],portC);
                        delay_ms(20);
                        PORTA.1 = 1;

                        PORTA.2 = 0;
                        Q2(digit[dahgan],portC);
                        delay_ms(20);
                        PORTA.2 = 1;

                        PORTA.3 = 0;
                        Q2(digit[yekan],portC);
                        delay_ms(20);
                        PORTA.3 = 1;
                    break;

                    case portD:
                        PORTA.0 = 0;
                        Q2(digit[hezargan],portD);
                        delay_ms(20);
                        PORTA.0 = 1;

                        PORTA.1 = 0;
                        Q2(digit[sadgan],portD);
                        delay_ms(20);
                        PORTA.1 = 1;

                        PORTA.2 = 0;
                        Q2(digit[dahgan],portD);
                        delay_ms(20);
                        PORTA.2 = 1;

                        PORTA.3 = 0;
                        Q2(digit[yekan],portD);
                        delay_ms(20);
                        PORTA.3 = 1;
                    break;
                    
                }
            break;

            case portB:
            switch(outputPort7seg){
                    case portA:   
                        PORTB.0 = 0;
                        Q2(digit[hezargan],portA);
                        delay_ms(20);
                        PORTB.0 = 1;

                        PORTB.1 = 0;
                        Q2(digit[sadgan],portA);
                        delay_ms(20);
                        PORTB.1 = 1;

                        PORTB.2 = 0;
                        Q2(digit[dahgan],portA);
                        delay_ms(20);
                        PORTB.2 = 1;

                        PORTB.3 = 0;
                        Q2(digit[yekan],portA);
                        delay_ms(20);
                        PORTB.3 = 1;
                    break;

                    case portC:
                        PORTB.0 = 0;
                        Q2(digit[hezargan],portC);
                        delay_ms(20);
                        PORTB.0 = 1;

                        PORTB.1 = 0;
                        Q2(digit[sadgan],portC);
                        delay_ms(20);
                        PORTB.1 = 1;

                        PORTB.2 = 0;
                        Q2(digit[dahgan],portC);
                        delay_ms(20);
                        PORTB.2 = 1;

                        PORTB.3 = 0;
                        Q2(digit[yekan],portC);
                        delay_ms(20);
                        PORTB.3 = 1;
                    break;

                    case portD:
                        PORTB.0 = 0;
                        Q2(digit[hezargan],portD);
                        delay_ms(20);
                        PORTB.0 = 1;

                        PORTB.1 = 0;
                        Q2(digit[sadgan],portD);
                        delay_ms(20);
                        PORTB.1 = 1;

                        PORTB.2 = 0;
                        Q2(digit[dahgan],portD);
                        delay_ms(20);
                        PORTB.2 = 1;

                        PORTB.3 = 0;
                        Q2(digit[yekan],portD);
                        delay_ms(20);
                        PORTB.3 = 1;
                    break;
                    
                }
            break;

            case portC:
            switch(outputPort7seg){
                    case portA:   
                        PORTC.0 = 0;
                        Q2(digit[hezargan],portA);
                        delay_ms(20);
                        PORTC.0 = 1;

                        PORTC.1 = 0;
                        Q2(digit[sadgan],portA);
                        delay_ms(20);
                        PORTC.1 = 1;

                        PORTC.2 = 0;
                        Q2(digit[dahgan],portA);
                        delay_ms(20);
                        PORTC.2 = 1;

                        PORTC.3 = 0;
                        Q2(digit[yekan],portA);
                        delay_ms(20);
                        PORTC.3 = 1;
                    break;

                    case portB:
                        PORTC.0 = 0;
                        Q2(digit[hezargan],portB);
                        delay_ms(20);
                        PORTC.0 = 1;

                        PORTC.1 = 0;
                        Q2(digit[sadgan],portB);
                        delay_ms(20);
                        PORTC.1 = 1;

                        PORTC.2 = 0;
                        Q2(digit[dahgan],portB);
                        delay_ms(20);
                        PORTC.2 = 1;

                        PORTC.3 = 0;
                        Q2(digit[yekan],portB);
                        delay_ms(20);
                        PORTC.3 = 1;
                    break;

                    case portD:
                        PORTC.0 = 0;
                        Q2(digit[hezargan],portD);
                        delay_ms(20);
                        PORTC.0 = 1;

                        PORTC.1 = 0;
                        Q2(digit[sadgan],portD);
                        delay_ms(20);
                        PORTC.1 = 1;

                        PORTC.2 = 0;
                        Q2(digit[dahgan],portD);
                        delay_ms(20);
                        PORTC.2 = 1;

                        PORTC.3 = 0;
                        Q2(digit[yekan],portD);
                        delay_ms(20);
                        PORTC.3 = 1;
                    break;
                    
                }
            break;

            case portD:
            switch(outputPort7seg){
                    case portA:   
                        PORTD.0 = 0;
                        Q2(digit[hezargan],portA);
                        delay_ms(20);
                        PORTD.0 = 1;

                        PORTD.1 = 0;
                        Q2(digit[sadgan],portA);
                        delay_ms(20);
                        PORTD.1 = 1;

                        PORTD.2 = 0;
                        Q2(digit[dahgan],portA);
                        delay_ms(20);
                        PORTD.2 = 1;

                        PORTD.3 = 0;
                        Q2(digit[yekan],portA);
                        delay_ms(20);
                        PORTD.3 = 1;
                    break;

                    case portC:
                        PORTD.0 = 0;
                        Q2(digit[hezargan],portC);
                        delay_ms(20);
                        PORTD.0 = 1;

                        PORTD.1 = 0;
                        Q2(digit[sadgan],portC);
                        delay_ms(20);
                        PORTD.1 = 1;

                        PORTD.2 = 0;
                        Q2(digit[dahgan],portC);
                        delay_ms(20);
                        PORTD.2 = 1;

                        PORTD.3 = 0;
                        Q2(digit[yekan],portC);
                        delay_ms(20);
                        PORTD.3 = 1;
                    break;

                    case portB:
                        PORTD.0 = 0;
                        Q2(digit[hezargan],portB);
                        delay_ms(20);
                        PORTD.0 = 1;

                        PORTD.1 = 0;
                        Q2(digit[sadgan],portB);
                        delay_ms(20);
                        PORTD.1 = 1;

                        PORTD.2 = 0;
                        Q2(digit[dahgan],portB);
                        delay_ms(20);
                        PORTD.2 = 1;

                        PORTD.3 = 0;
                        Q2(digit[yekan],portB);
                        delay_ms(20);
                        PORTD.3 = 1;
                    break;
                    
                }
            break;

       
       }
    }

}


