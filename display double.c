#include <avr/io.h>
#ifndef F_CPU
# define F_CPU 8000000UL
#endif
#include <util/delay.h>

// ??????? ??????????
void Num();

int main() {
	DDRD = 0xFF; // PORTD: ??????
	DDRC = 0xFF; // PORTC: ??????
	
	while (1) {
		// PORTA-?? ??????????? ???? ?????????
		PORTC = 0b00111111; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b00000110; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01011011; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01001111; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01100110; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01101101; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01111101; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b00000111; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01111111; // ?
		Num();
		_delay_ms(500);
		
		PORTC = 0b01101111; // ?
		Num();
		_delay_ms(500);
	}
}

void Num() {
	// PORTD-?? ??????????? ???? ?????????
	PORTD = 0b00111111; // ?
	_delay_ms(500);
	
	PORTD = 0b00000110; // ?
	_delay_ms(500);
	
	PORTD = 0b01011011; // ?
	_delay_ms(500);
	
	PORTD = 0b01001111; // ?
	_delay_ms(500);
	
	PORTD = 0b01100110; // ?
	_delay_ms(500);
	
	PORTD = 0b01101101; // ?
	_delay_ms(500);
	
	PORTD = 0b01111101; // ?
	_delay_ms(500);
	
	PORTD = 0b00000111; // ?
	_delay_ms(500);
	
	PORTD = 0b01111111; // ?
	_delay_ms(500);
	
	PORTD = 0b01101111; // ?
	_delay_ms(500);
}