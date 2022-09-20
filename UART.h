############# fileName.h ##############
#ifndef UART_H_
#define UART_H_

void SWUART_init(uint32_t baudrate);
void SWUART_send(uint8_t data);
void SWUART_recieve(uint8_t *data);

#endif
//////////////////////////////////////////////////////////
