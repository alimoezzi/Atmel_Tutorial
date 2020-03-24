/*
 * de_button_game.c
 *
 * Created: 24/03/2020 21:04:11
 * Author : SARM
 */ 

#include <avr/io.h>
#include <util/delay.h>

int Pressed_Confidence_level[2];
int Released_Confidence_level[2];
int Pressed[2]; 
// which LED is being led up
int LEDNumber[2]

int main(void)
{
    /* Initialization area. Setting up ports and data direction registers */
	// control inputs  PC0, PC1
	// set DD to 0 for inputs
	DDRC &= ~(1 << DDC0);
	DDRC &= ~(1 << DDC1);
	// set for high reading
	PORTC |= (1 << DDC0);
	PORTC |= (1 << DDC1);
	// DD to 1 for output
	DDRB = -1;
	DDRD |= ~(3 << 6);
	 
    while (1)
	{
		if (/*button pressed for side 1*/) {
			/* lighten up LED on portB on at a time */
		} else {
			/* Make sure button was released */
		}
		if (/*button pressed for side 2*/) {
			/* lighten up LED on portB on at a time */
		} else {
		/* Make sure button was released */
		}
		// Process button clicks for side 1
		// Process button click for side 2
    }
}

