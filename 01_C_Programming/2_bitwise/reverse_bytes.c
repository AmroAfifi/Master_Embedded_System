// Write a program that reads a positive integer and reverse all bits.
// x = 0x12345678 -> x will be 0x78563412
#include <stdio.h>

typedef unsigned long uint32;

int main (){
	uint32 y, x =0x12345678; // 51
	//need 12345678 to be 87654321 
	// before sol. u have to know that 0x1 = 0b1111 
	//so, 0x11 = ob1111 1111  = 8bits = 1byte
	// so,here swab bytes. but in bitwise op. we use bits
	//   bits:   24 16  8  0
	//    0x :   12 34 56 78
	y= (((x>>24) & 0xff) << 0) |
	   (((x>>16) & 0xff) << 8) |
	   (((x>>8) & 0xff) << 16) |
	   (((x>>0) & 0xff) << 24) ;
	
	printf("%x",y);
}