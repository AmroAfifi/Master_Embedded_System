#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
int main (){
	uint8 str1[50]="Amr " , str2[50]="Afifi" , *p2, *p1 ;
	p1 = str1;
	p2 = str2;
	while(*p1 !='\0'){
		p1++;
	}
	while(*p2 !='\0'){
		*p1 = *p2;
		p1++;
		p2++;
	}
	*p1 = '\0';
	printf("the copied str is %s",str1);
	
}