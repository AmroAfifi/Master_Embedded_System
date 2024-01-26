
#include <stdio.h>
#define WAY 2 
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
#if WAY ==1
int main (){
	uint8 a[]={1,2,3,4,5,6,9,8,7};
	uint8*p=a;
	uint8 size =sizeof(a) / sizeof(a[0]);
	uint8 temp ,i , j ;
	for( i=0 ; i< size ; i++){
		for( j=i+1 ; j< size ; j++){
			if(p[i] < p[j]){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
			
		}
	}
	printf("the second largest elem= %d \n",p[1]);
}
#elif WAY ==2 // this method is more optimise 

int main (){
	uint8 a[]={1,2,3,4,5,6,9,8,7};
	uint8 size =sizeof(a) / sizeof(a[0]);
	uint8 m1=a[0] , m2 ,i ;
	for(i=1 ; i<size ; i++){
		if(m1<a[i]){
			m2=m1; //will stop at 9 so the sec will be 6 
			m1=a[i];
		}
		else if (m1>a[i] && m2<a[i]){
			m2=a[i];
		}
	}
	printf("the second largest elem= %d \n",m2);
}
#endif






