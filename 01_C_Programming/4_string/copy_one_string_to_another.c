#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

int main (){
	uint8 str1[]="amr" , str2[50] ,*p2,*p1 ;
	p2 = str2;
	p1 = str1;
	while(*p1 !='\0'){// becouse the last elem of string is zero
		*p2=*p1;
		p1++; // move to the next one
		p2++;
	}
	*p2 ='\0'; 
	printf("the copied str is %s %s",str2);
}
 
