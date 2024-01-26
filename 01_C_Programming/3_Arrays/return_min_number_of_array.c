#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

uint8 max_elem(signed char * , uint8);

int main (){
	signed char a[]={2,1,5,3,7,9,8,4,6};
	uint8 size= sizeof (a) / sizeof (a[0]) ; 
	printf("the min element is  %d",max_elem(a , size));
}
uint8 max_elem(signed char *p , uint8 size){
	signed char min=p[0];
	for(uint8 i=0 ; i<size ; i++){
		if(min > p[i]){
			min = p[i];
		}
	}
	return min;
}