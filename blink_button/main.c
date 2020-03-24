/*
 * blink_button.c
 *
 * Created: 16/03/2020 18:47:07
 * Author : SARM
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC |= (1 << DDC0); // PC0 is output port
	DDRC &= ~ (1 << DDB1); // PC1 is input port
	PORTC |= (1 << PORTC1); // default PC1 to high or set the pin to high reading
	/* Replace with your application code */
	while (1)
	{
		PORTC ^= (1 << PORTC0);
		if(bit_is_clear(PINC, 1) /*PINC && ~(1 << PORTC1)*/){
			// if pressed
			_delay_ms(5);
		} else {
			// if not
			_delay_ms(500);
		}
	}
	return(0);
}

