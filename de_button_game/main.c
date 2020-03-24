/*
 * de_button_game.c
 *
 * Created: 24/03/2020 21:04:11
 * Author : SARM
 */ 

#include <avr/io.h>
#include <util/delay.h>

int Pressed_Confidence_level;
int main(void)
{
    /* Initialization area. Setting up ports and data direction registers */
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

