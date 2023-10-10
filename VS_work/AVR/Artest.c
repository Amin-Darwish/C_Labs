#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif
#include<avr/io.h>
int main ()
{
	unsigned char counter=0;
	DDRD&=~(1<<PD4);
	DDRC|=(1<<PC0)|(1<<PC1)|(1<<PC2)|(1<<PC3);
	PORTC&=0xf0;
	while(1)
	{
		if(PIND&(1<<PD4))
		{
			if (counter==9)
			{
				counter=0;
			}
			counter++;
			PORTC=(PORTC&0xF0)|(counter&0x0F);

		}
	}

}

