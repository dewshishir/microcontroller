#ifndef F_CPU
#define F_CPU 8000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	DDRB = 0xFF;
	PORTB = 0xFF;
}
