#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void check_even_odd(uint16); 

int main (){
	uint16 num;
	scanf("%hi",&num);
	check_even_odd(num);
}

void check_even_odd(uint16 num){
	if(num%2 !=0){
		printf("odd");
	} 
	else {
		printf("even");
	}
}