#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

uint8 amr(uint8 , uint8 , uint8);
void callback(uint8(*p_amr)(uint8 , uint8 , uint8));

void main(){
   callback(amr);
}
uint8 amr(uint8 n1, uint8 n2 , uint8 n3){
	return n1+n2+n3;
}
void callback(uint8(*p_amr)(uint8 , uint8 , uint8)){
	uint8 n1=5 , n2=2 , n3=6 ;
	printf("%d", p_amr(n1,n2,n3));
}