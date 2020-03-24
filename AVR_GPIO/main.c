/*
 * AVR_GPIO.c
 *
 * Created: 11/03/2020 18:04:39
 * Author : SARM
 */ 

#include <avr/io.h>


int main(void)
{
	// make the shift the last bit of 00001 five time to get the fifth bit up then or with register to preserve other bits
	DDRB |= (1<<DDB5); 
    /* Replace with your application code */
    while (1) 
    {
		// set port B5
		PORTB |= (1<<PORTB5);
    }
	return(0);
}

