
#include<uart_lib.h>
#include<avr/io.h>
#include<util/delay.h>
#define FOSC 4000000
void set_uartbaud(int BAUD)
{
	UBRRH = (unsigned char)((FOSC/16/BAUD-1)>>8);
	UBRRL = (unsigned char)(FOSC/16/BAUD-1);
	UCSRC|=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
	UCSRB|=(1<<RXEN)|(1<<TXEN);
}

void disable_uart()
{
	UCSRB&=~(1<<TXEN);
	UCSRB&=~(1<<RXEN);
}



void enable_uart_txcint()
{
	UCSRB|=(1<<TXCIE);
}

void enable_uart_rxcint()
{
	UCSRB|=(1<<RXCIE);
}

void enable_uart_udreint()
{
	UCSRB|=(1<<UDRIE);
}

void disable_uart_txcint()
{
	UCSRB&=~(1<<TXCIE);
}

void disable_uart_rxcint()
{
	UCSRB&=~(1<<RXCIE);
}

void disable_uart_udreint()
{
	UCSRB&=~(1<<UDRIE);
}

void sendchar_uart(char data)
{
	int temp;
	temp=UCSRA&(1<<UDRE);
	temp=temp>>UDRE;
	while(!temp)
	{

	}
	UDR=data;
}

char getchar_uart()
{
	// Wait until a byte has been received

	while((UCSRA&(1<<RXC)) == 0);

	// Return received data

	return UDR;

}

void sendstring_uart(char v[])
{
	int i;
	for(i=0;i<strlen(v);i++)
	{
		sendchar_uart(v[i]);
		_delay_ms(10);
	}
}
