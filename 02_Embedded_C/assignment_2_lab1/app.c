
#include "uart.h"

unsigned char string_buffer[100]="learn_in_depth:<Amr Afifi>";

void main(void)
{
	uart_send_string(string_buffer);
}
