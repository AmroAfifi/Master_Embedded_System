/*
Write a program that print the biggest number between two integer numbers and also print which if those
numbers are equal, not equal.
*/
#include<stdio.h>
int main(){
	unsigned short num1=15 , num2=20 ;
	if (num1<num2)
		printf("num1<num2");
	else if (num1>num2)
		printf("num1>num2");
	else 
		printf("num1==num2");
}