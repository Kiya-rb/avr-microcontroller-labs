#include <myHeader.h>

void q3(void)
{
    unsigned long int ferekans; 
    char show[30];
    ferekans=PINA;
  
    // Timer/Counter 1 initialization
    // Clock source: System Clock
    // Clock value: 8000.000 kHz
    // Mode: Normal top=0xFFFF
    // OC1A output: Toggle on compare match
    // OC1B output: Toggle on compare match
    // Noise Canceler: Off
    // Input Capture on Falling Edge
    // Timer Period: 8.192 ms
    // Output Pulse(s):
    // OC1A Period: 16.384 ms Width: 8.192 ms
    // OC1B Period: 16.384 ms Width: 8.192 ms
    // Timer1 Overflow Interrupt: Off
    // Input Capture Interrupt: Off
    // Compare A Match Interrupt: Off
    // Compare B Match Interrupt: Off
    TCCR1A=(0<<COM1A1) | (1<<COM1A0) | (0<<COM1B1) | (1<<COM1B0) | (0<<WGM11) | (0<<WGM10);
    TCCR1B=(0<<ICNC1) | (0<<ICES1) | (0<<WGM13) | (0<<WGM12) | (0<<CS12) | (0<<CS11) | (1<<CS10);
    TCNT1H=0x00;
    TCNT1L=0x00;
    ICR1H=0x00;
    ICR1L=0x00;
    OCR1AH=0x00;
    OCR1AL=0x00;
    OCR1BH=0x00;
    OCR1BL=0x00;
    
//    lcd_gotoxy(8,1);
//    sprintf(show,"F:%d",ferekans);
//    lcd_puts(show);

}