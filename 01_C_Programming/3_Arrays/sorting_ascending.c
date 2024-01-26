#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;

void sort_ascending(uint8 *p ,uint8 size);
int main (){
	uint8 a[]={2,1,5,3,7,9,8,4,6};
	uint8 size = sizeof(a)/sizeof(a[0]);
	sort_ascending(a ,size);
}
void sort_ascending(uint8 *p ,uint8 size){
	uint8 temp=0 , i , j;
	for( i=0 ; i<size ; i++){
		for( j=i+1 ; j<size ; j++){
			if(p[j] <p[i]){
				temp = p[i];
				p[i] =p[j] ;
				p[j] = temp;
			}
		}
			printf("	%d\n",p[i]);
	}
}