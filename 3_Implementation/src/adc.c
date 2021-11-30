
#include<avr/io.h>
#include<adc_lib.h>



#define ADC_VREF_TYPE 0x00

// Read the AD conversion result
unsigned int read_adc(unsigned char adc_input)
{
ADMUX=adc_input|ADC_VREF_TYPE;
// Start the AD conversion
ADCSRA|=0x40;
// Wait for the AD conversion to complete
while ((ADCSRA & 0x10)==0);
ADCSRA|=0x10;
return ADCW;
}




void ADCinit()
{
ADMUX=ADC_VREF_TYPE;
ADCSRA=0x85;
}
