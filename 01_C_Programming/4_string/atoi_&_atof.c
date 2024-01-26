#include <stdio.h>
#include <stdlib.h>

void main(){
	char text[20];
	int x ,y ;
	float z;
	printf ("enter x : ");
	gets(text);
	x = atoi(text);
	
	printf ("enter y : ");
	gets(text);
	y = atoi(text);
	
	z= x+y;
	printf("x+y = %d \n",z);
	
}