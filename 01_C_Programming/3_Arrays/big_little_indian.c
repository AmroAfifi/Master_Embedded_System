#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
int main (){
	uint16 x= 0x1234;
	uint8 *p;
	p = &x;
	if (0x34==*p)
		printf("little indian");
	else 
		printf("big indian");
	
}