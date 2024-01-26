//Author: Amr_Afifi

#include "lifo.h"

uint32 buffer1[5];

void main(){
	uint32 temp=0;
	uint8 i=0;
	
	LIFO_BUF_t uart_lifo , I2C_lifo;
	//static allocation
	lifo_init(&uart_lifo , buffer1 ,5);
	//dynamic allocation
	uint32 * buffer2 = (uint32*) malloc (5 * sizeof(uint32));//4*5=20 byte
	lifo_init(&I2C_lifo , buffer2 , 5);
	
	for(i=0 ; i<5 ; i++){
		if (lifo_push_item(&uart_lifo ,i)==lifo_no_error){
			printf("UAIRT_LIFO PUSH: %d\n",i);
		}
	}
	
	for(i=0 ; i<5 ; i++){
		if (lifo_pop_item(&uart_lifo ,&temp)==lifo_no_error){
			printf("UAIRT_LIFO Pop: %d\n",temp);
		}
	}
}