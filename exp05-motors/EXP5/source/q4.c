#include <myHeader.h>

//Q4
void Q4(void){

    int ocr = 0;

    // Timer/Counter 0 initialization
    // Clock source: System Clock
    // Clock value: 1000.000 kHz
    // Mode: Phase correct PWM top=0xFF
    // OC0 output: Non-Inverted PWM
    // Timer Period: 0.51 ms
    // Output Pulse(s):
    // OC0 Period: 0.51 ms Width: 0.052 ms
//    TCCR0=(1<<WGM00) | (1<<COM01) | (0<<COM00) | (0<<WGM01) | (0<<CS02) | (1<<CS01) | (0<<CS00);
//    TCNT0=0x00;
//    OCR0=0x1A;
    TCCR0=(1<<WGM00) | (1<<COM01) | (0<<COM00) | (0<<WGM01) | (1<<CS02) | (0<<CS01) | (1<<CS00);
    TCNT0=0x00;
    OCR0=0xB2;
    
    ocr = PINA;
    ocr = ocr + 0.5;
    
    OCR0 = ocr;

}