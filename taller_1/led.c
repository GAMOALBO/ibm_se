#include <avr/io.h>
#include <util/delay.h>
#define TRUE 1
#define FALSE 0

#include "leds.h"

void blink( uint8_t t)
{
	PORTB=0x00
	_delay_ms=(t);
	PORTB= 0xFF;
	_delay_ms_(t);
}