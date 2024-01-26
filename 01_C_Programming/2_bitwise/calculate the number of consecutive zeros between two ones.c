#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
int main (){
	uint32 num=0b0000000001100011010000011100001000000;
	uint8 counter=0 , flag=0 , num_of_zeros=0; 
	while(num!=0){
		if(num&1 == 1){
			if(counter >num_of_zeros ){
				num_of_zeros=counter;
			}
			counter=0;
			flag=1;
		}
		else if (1==flag){  //(else if) mean num&1==0 // if ((num&1==0) && (1==flag))
			counter++;
		}
		num =num>>1;
	}
	
	printf("the number of consecutive zeros = %d",num_of_zeros);
}