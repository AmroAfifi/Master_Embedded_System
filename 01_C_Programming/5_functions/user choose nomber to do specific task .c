// array of pointer to function
#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void add (uint8 , uint8);
void sub (uint8 , uint8);
void mult (uint8 , uint8);
void div (uint8 , uint8);

void main (){
	void (*arr_of_p[])(uint8 , uint8)={add , sub ,mult ,div };
	uint8 x , a=3 , b=2;
	printf("choose  ");
	scanf("%ld",&x);
	if (x>3)
		printf("error");
	else
		(*arr_of_p[x])(a , b);
}
void add (uint8 a, uint8 b){
	printf("add is %d",a+b);
}
void sub (uint8 a, uint8 b){
	printf("sub is %d",a-b);
}
void mult (uint8 a, uint8 b){
	printf("mult is %d",a*b);
}
void div (uint8 a, uint8 b){
	printf("div is %d",a/b);
}