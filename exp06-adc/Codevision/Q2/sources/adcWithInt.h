#ifndef _adcWithInt_INCLUDED_
#define _adcWithInt_INCLUDED_

#define FIRST_ADC_INPUT 0
#define LAST_ADC_INPUT 7
// Voltage Reference: AVCC pin
#define ADC_VREF_TYPE ((0<<REFS1) | (1<<REFS0) | (0<<ADLAR))

void adc_with_int(void);
interrupt [ADC_INT] void adc_isr(void);


#endif
