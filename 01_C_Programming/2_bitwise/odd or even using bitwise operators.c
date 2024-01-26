#include <stdio.h>

typedef unsigned short uint16;

int main (){
	while(1){
		uint16 x= 0;    // 128 64 32 16 8 4 2 1 
		scanf("%ld",&x);//  1   1  1  1 1 1 1 1
		x=x&1;          //                    odd
		if (1==x){
			printf("odd\n");
		}
		else 
			printf("even\n");
	}
}