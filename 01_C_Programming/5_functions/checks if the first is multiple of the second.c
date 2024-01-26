//Write a C Function that reads two integers and checks
// if the first is a multiple of the second.
#include <stdio.h>
typedef unsigned char uint16;

void first_mult_sec(int , int);
int main (){
	int num1, num2 ;
	scanf("%d",&num1);
	scanf("%d",&num2);
	first_mult_sec(num1, num2);
}
void first_mult_sec(int n1, int n2){
	if (n1%n2 == 0){
		printf("the first is multiple of the second");
	}
	else 
		printf("NOT");
}
