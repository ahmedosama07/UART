#include "UART.h"
#include <avr/io.h>
void SWUART_init(uint32_t baudrate)
 {
    UCSRB |= (1 << RXEN) | (1 << TXEN);
	  UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1) | (1 << UPM1);
	  UBRRL = BAUD_PRESCALE;
	  UBRRH = (BAUD_PRESCALE >> 8);
 }
 void SWUART_send(uint8_t data)
 {
    while (! (UCSRA & (1<<UDRE)));
	  UDR = ch;
 }
 void SWUART_recieve(uint8_t *data)
 {
    while ((UCSRA & (1 << RXC)) == 0);
	  return(UDR);
 }
