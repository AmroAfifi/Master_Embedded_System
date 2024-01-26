/* 
Write a program that take two integers from the user and print the results of this equation as float:
Result = ((num1 + num2) * 3) /2– 10.
*/
#include <stdio.h>
int main (){
	float num1=0 , num2=0 ;
	float result=0 ;
	scanf("%f\n%f", &num1 , &num2);
	result = (float)((num1+num2)*3)/2-10;
	printf ("the result = %f",result);
}