
/*Write a program that reads a student grade percentage and prints
 "Excellent" if his grade is greater than or equal 85,
 "Very Good" for 75 or greater;
 "Good" for 65, "Pass" for 50, 
 "Fail" for less than 50.
*/
#include<stdio.h>
int main(){
	unsigned short deg;
	while(1){
		scanf("%hi",&deg);
		if((deg>=85)&&(deg<=100))
			printf("Excellent\n");
		else if((deg>=75)&&(deg<=84))
			printf("very good\n");
		else if((deg>=65)&&(deg<=74))
			printf(" good\n");
		else if((deg>=50)&&(deg<=64))
			printf("pass\n");
		else if((deg<=50)&&(deg>=0))
			printf("fail\n");
		else
			printf("wrong \n");
	}	
}