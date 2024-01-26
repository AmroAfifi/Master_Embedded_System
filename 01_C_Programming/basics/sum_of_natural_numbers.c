/*
 ============================================================================
 Name        : sum_of_natural_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


void main() {
	int n,sum=0;
	short count=0;
	printf("enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while(count<=n){
		sum+=count;
		count++;
	}
	printf("sum = %d",sum);
}
