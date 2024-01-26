#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
int main (){
	uint8 x=0b10011011, c1=0 , c0=0 ,y ;
	for (uint8 i=0 ; i<8 ; i++){
		y=(x>>i)&1;
		if(y==1){
			c1=c1+1;
		}
		else{
			c0=c0+1;
		}
	}
	printf ("number of zeros= %d \nnumber of ones = %d",c0,c1);
		////////	sol.2 for more optimise	  ////////
	/*
	uint32 cout_1,num = 0;
    scanf("%ld",&num);
    while(num!=0){
        num>>=1;
        cout_1 +=(num&1);
    }
    printf("number of zeros= %d \nnumber of ones = %d",(32-cout_1),cout_1);
	*/
}