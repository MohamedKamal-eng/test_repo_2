/*
 * main.c
 *
 *  Created on: May 10, 2022
 *      Author: THE LAPTOP SHOP
 */
#include<avr/io.h>
#include<util/delay.h>
int main(void)
{
	DDRB=0b00001111; //PA0 Output

	while(1) //Super loop
	{
		//PORTA=0b00000001; //PA0A HIGH
	  //  _delay_ms(1000);
	  //  PORTA=0;
	  //  _delay_ms(1000);
		PORTB=0b00000001;
		for(int i=0;i<4;i++)
    {
		_delay_ms(250);
		PORTA<<=1;
	}
	}
}
