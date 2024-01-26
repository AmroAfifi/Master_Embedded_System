 //  toggle bit 
#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
#define WAY 1
#if WAY ==1
uint8 max_elem(signed char * , uint8);

int main (){
	signed char a[]={2,1,5,3,7,-2,9,8,4,6};
	uint8 size= sizeof (a) / sizeof (a[0]) ; 
	printf("the max element is  %d",max_elem(a , size));
}
uint8 max_elem(signed char *p , uint8 size){
	signed char max=p[0];
	for(uint8 i=0 ; i<size ; i++){
		if(max < p[i]){
			max = p[i];
		}
	}
	return max;
}
#elif WAY ==2
// this way is not optimise 

uint8 way2_max(signed char *p ,uint8 size);

int main (){
signed char a[]={2,1,5,3,7,9,8,4,6};
	uint8 size= sizeof a / sizeof a[0] ; 
	printf("%d",way2_max(a ,size));
}

uint8 way2_max(signed char *p ,uint8 size){
	uint8 i , j , temp; 
	for(i=0 ; i<size ; i++){
		for(j=i+1 ; j<size ; j++){
			if(p[j] < p[i]){
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	return p[i] ; 
}
#endif