#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

uint8 avarage(uint8 a[] , uint8);
int main (){
	uint8 arr[]={8,2,4,6};
	uint8 size = sizeof(arr)/sizeof (arr[0]);
	uint8 avg= avarage(arr ,size );
	printf("the avg is %d", avg);
}
uint8 avarage(uint8 a[] , uint8 size){
	uint8 i=0 , sum , avg;
	for( i=0 ; i<size ; i++){
		sum = sum +a[i];
	}
	avg= sum/size;
	return avg;
}
