 //   	reverse all bits 
 /*
#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
int main (){
	uint8 a=0b01100010;//98 need to be 70 (01000110)
	uint8 i ,b;
	for (i=0 ; i<8 ; i++){
	b|= ( ((a>>i)&1)<<(7-i) ) ; 
	}
	printf("after reversing : %d",b);
}
*/
   //   using function 
#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;

uint8 reversing_bits  (uint8 a);
int main (){
	uint8 a=0b01100010;//98 need to be 70 (01000110)
	uint8 reverse_num= reversing_bits (a);
	printf("after reversing : %d",reverse_num);
}
uint8 reversing_bits  (uint8 a){
	uint8 i ,b;
	for (i=0 ; i<8 ; i++){ 
	b|= ( ((a>>i)&1)<<(7-i) ) ; 
	}
	
	return b;
}
