#include <stdio.h>

typedef unsigned char uint8;

void lower_to_upper( uint8 * );
void main (){
	uint8 string[100];
	scanf("%s",string);
	lower_to_upper( string );
	printf("the upper is  %s",string);
}
void lower_to_upper( uint8 *str ){
	uint8 i=0;
	for(i=0 ; str[i]!=0 ; i++){
		if(str[i]<= 122  && str[i] >= 97 ){
			str[i] = str[i] - 32 ;
		}
	}
}