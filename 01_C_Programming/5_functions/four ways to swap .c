#include <stdio.h>

typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;

void swab_way1(uint8 a1 ,uint8 b1);
void swab_way2(uint8 a2 ,uint8 b2);
void swab_way3(uint8 a3 ,uint8 b3);
void swab_way4(uint32 a4 ,uint32 b4);

int main (){
	uint8 a=50, b=60 ;
	swab_way1(a,b);
	swab_way2(a,b);
	swab_way3(a,b);
	swab_way4(a,b);
}
void swab_way1(uint8 a1 ,uint8 b1){
	uint8 temp=0;
	temp=a1;
	a1=b1;
	b1=temp;
	printf("result1 : %d  	%d \n",a1,b1);
}
void swab_way2(uint8 a2 ,uint8 b2){
	a2=a2+b2;
	b2=a2-b2;
	a2=a2-b2;
	printf("result2 : %d  	%d \n",a2,b2);
}
void swab_way3(uint8 a3 ,uint8 b3){
	a3=a3^b3;
	b3=a3^b3;
	a3=a3^b3;
	printf("result3 : %d  	%d \n",a3,b3);
}
// here uint32 to avoid the the crash or over flow 
void swab_way4(uint32 a4 ,uint32 b4){
	a4=a4*b4;
	b4=a4/b4;
	a4=a4/b4;
	printf("result4 : %d  	%d \n",a4,b4);
}




