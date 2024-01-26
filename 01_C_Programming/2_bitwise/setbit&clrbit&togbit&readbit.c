#include <stdio.h>

#define setbit(var,bit)  var|(1<<bit)
#define clrbit(var,bit)  var&~(1<<bit)
#define togbit(var,bit)  var^(1<<bit)
#define readbit(var,bit) (var>>bit)&1

typedef unsigned short uint16 ;
typedef unsigned char uint8 ;

int main()
{
	uint16 a=0b1111000011011011; //61659
	printf("a=%d\n",readbit(a,3));
	printf("a=%d\n",setbit(a,2));
	printf("a=%d\n",clrbit(a,3));
	printf("a=%d\n",togbit(a,3));
    printf("set the bits 8&9 %d\n",(a|(1<<8))|(1<<9));


 ////////////////////////////////////////
    unsigned char x=0b11101101;//237
    unsigned char y=0b11100001;//225
    unsigned char z=0b11001101;//205
    unsigned char e=0b11001111;//207

    //setbit 4
    x=x|(1<<4); // 11111101
    printf("x=%d\n",x);//253
    //clearbit 5
    y=y&~(1<<5);// 11000001
    printf("y=%d\n",y);//193
    //togglebit 3
    z=z^(1<<3);// 11000101
    printf("z=%d\n",z);//197
    //readbit 6
    e=(e>>6)&1;// 11001111
    printf("e=%d\n",e);// 1

}
