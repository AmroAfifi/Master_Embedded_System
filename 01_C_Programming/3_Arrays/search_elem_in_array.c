#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

uint8 search_element(uint8 * , uint8 , uint8);

int main (){
	while (1){
		uint8 a[]={2,1,5,3,7,9,8,4,6,48, 89,5};
		uint8 elem, size = sizeof(a) / sizeof(a[0]);
		printf("enter the element\n");
		scanf("%ld",&elem);
		//uint8 x=search_element(a,elem , size);
		if (0==search_element(a,elem , size))
			printf("\nfound\n");
		else
			printf("\nNOT\n");

	}

}
uint8 search_element(uint8 *p , uint8 elem , uint8 size){
	uint8 i;
	for(i=0 ; i<size ; i++){
		if (elem== p[i])
			return 0;
	}
	return 1;
}
