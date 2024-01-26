#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void reverse_str(uint8 *);
uint8 string_length(uint8 *);

int main (){
	uint8 str[50];
	scanf("%s",str);
	reverse_str(str);
	printf ("%s\n",str);
}
void reverse_str(uint8 * s){
	uint8 i=0 ,temp =0;
	uint8 size = string_length(s);
	for (i=0 ; i<(size/2) ; i++){//for more optimise you can 
		temp = s[i];            // set two variables like 
		s[i] = s[size -i] ;    // op = size\2 , 
		s[size-i] = temp ;    // x = size -i
	}                        // that for reducing the time 
}
uint8 string_length(uint8 *s){
	uint8 count=0;
    while(s[count]!=0){
        count++;
    }
    return count-1;//the length without NULL
}