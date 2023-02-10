#include "uart.h"
unsigned char str[100] = "abcdefg" ;
void main (void){

   uart_send_string(str);

}