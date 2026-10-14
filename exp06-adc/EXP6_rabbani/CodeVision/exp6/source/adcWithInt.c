#include <myHeader.h>

unsigned int adc_data[LAST_ADC_INPUT-FIRST_ADC_INPUT+1];
int old_adc_data[8];


void adc_with_int(void){
// ADC initialization
// ADC Clock frequency: 1000.000 kHz
// ADC Voltage Reference: AVCC pin
// ADC Auto Trigger Source: Free Running
ADMUX=FIRST_ADC_INPUT | ADC_VREF_TYPE;
ADCSRA=(1<<ADEN) | (1<<ADSC) | (1<<ADATE) | (0<<ADIF) | (1<<ADIE) | (0<<ADPS2) | (1<<ADPS1) | (1<<ADPS0);
SFIOR=(0<<ADTS2) | (0<<ADTS1) | (0<<ADTS0);

}

// ADC interrupt service routine
// with auto input scanning
interrupt [ADC_INT] void adc_isr(void)
{
static unsigned char input_index=0;
// Read the AD conversion result
adc_data[input_index]=ADCW;
// Select next ADC input
if (++input_index > (LAST_ADC_INPUT-FIRST_ADC_INPUT))
   input_index=0;
ADMUX=(FIRST_ADC_INPUT | ADC_VREF_TYPE)+input_index;
// Delay needed for the stabilization of the ADC input voltage
delay_us(10);
// Start the AD conversion
ADCSRA|=(1<<ADSC);
}



void Q2(void){

    char text[30];
    //int old_adc_data[8] = {0};
    int i=0;
    
     
    
    //initialize adc
    adc_with_int();
    
    for(i = 0; i<=7; i++){
        int change = 0;   
        if (adc_data[i] <= old_adc_data[i])
            change = ((adc_data[i]-old_adc_data[i])/old_adc_data[i])*10000; 
        else
            change = ((old_adc_data[i]-adc_data[i])/old_adc_data[i])*10000;
        
        delay_ms(100);
        if(change >= 500 || change <= -500){  
            old_adc_data[i] = adc_data[i];
            sprintf(text,"adc[%d]= %d",i,adc_data[i]);
            lcd_gotoxy(0,0);
            lcd_puts(text); 
        }
        change = 0;   
    }
}

void Q3(void){
    
    OCR0=adc_data[0]/4;

}
