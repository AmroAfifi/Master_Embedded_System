#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void check_prime(uint16);

int main (){
	while(1){
		uint16 num;
		scanf("%hi",&num);
		check_prime(num);
	}
}
void check_prime(uint16 n){
	uint8 flag=0;
	for(uint8 i=2 ; i<n/2 ; i++){
		if (n%i ==0){
			printf("not prime");
			flag=1; 
			break;
		}
	}
	if(flag==0){
		printf(" prime");
	}
	
}