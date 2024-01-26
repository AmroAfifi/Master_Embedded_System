#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
uint8 get_length(uint8* );
int main (){
	uint8 l=0 , string[100];
	scanf("%s",string);
	l=get_length(string) +1;// put in mind the last NULL
	printf("the length is  %d",l);
}
uint8 get_length(uint8 *str){
	uint8 length=0; 
	while(str[length] != 0){
		length++;
	}
	return length;
}