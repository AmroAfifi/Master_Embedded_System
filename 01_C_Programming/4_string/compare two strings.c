#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

int main (){
	uint8 str1[50]="Amro" , str2[50]="Amr" , *p2, *p1 , flag=0 ;
	p1 = str1;
	p2 = str2;
	while(*p1 !=0 || *p2 !=0){
		if(*p1 != *p2){
			flag=1;
			break;
		}
		p1++;
		p2++;
	}
	if (1==flag){
		printf("not equal");
	}
	else {
		printf(" equal");
	}
}