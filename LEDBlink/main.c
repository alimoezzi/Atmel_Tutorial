/*
 * LEDBlink.c
 *
 * Created: 11/03/2020 18:56:01
 * Author : SARM
 */ 

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC |= (1 << DDC0);
	PORTC &= ~(1 << PORTC0);
    /* Replace with your application code */
    while (1) 
    {
		PORTC ^= (1 << PORTC0);
		_delay_ms(100);
    }
	return(0);
}

