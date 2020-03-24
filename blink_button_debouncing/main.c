/*
 * blink_button_debouncing.c
 *
 * Created: 16/03/2020 19:25:03
 * Author : SARM
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC |= (1 << DDC0); // set pin 0 to output
	DDRC &= ~(1 << DDC1); // set pin 1 to input
	DDRC |= (1 << DDC2); // set pin 2 to output
	PORTC &= ~(1 << PORTC0);
	PORTC |= (1 << PORTC1); // set pin 1 to high reading
	PORTC |= (1 << PORTC2);
	/* Replace with your application code */
	char preesed = 0;
	// 0000000000000000000000000101101010111111111111111111111111010101000000000000000000000010111111
	int Pressed_Confidence_Level = 0;
	int Released_Confidence_Level = 0;
	while (1)
	{
		if (bit_is_clear(PINC, 1)){
			Pressed_Confidence_Level++;
			if ( Pressed_Confidence_Level > 200)
			{
				if (preesed == 0)
				{
					PORTC ^= (1 << PORTC2);
					PORTC ^= (1 << PORTC0);
					preesed = 1;
				}
				Pressed_Confidence_Level = 0;
			}
		} else {
			Released_Confidence_Level++;
			if (Released_Confidence_Level > 200) {
				preesed = 0;
				Released_Confidence_Level = 0;
			}
		}
	}
	return(0);
}

