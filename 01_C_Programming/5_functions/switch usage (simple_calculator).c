#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned long uint32;
#define METHOD 1
uint32 simple_calculator(uint8 , uint32 , uint32);

int main (){
	while(1){
		uint32 num1 , num2;
		uint8 op;
		scanf("%d%c%d",&num1,&op,&num2);
		uint32 result = simple_calculator( op , num1 , num2);
		if(result =='E')
			printf("error\n");
		else 
			printf("result = %d \n",result);
	}
}
uint32 simple_calculator(uint8 op ,uint32 num1 ,uint32 num2){
	#if METHOD == 1
	if (op=='+'){
		return num1+num2;
	}
	else if (op=='-'){
		return num1-num2;
	}
	else if (op=='*'){
		return num1*num2;
	}
	else if (op=='/'){
		return num1/num2;
	}
	else {
		return 'E';
	}
	#elif METHOD ==2
	//for more optimize and fast operation
	switch(op){
		case '+':return num1+num2;break;
		case '-':return num1-num2;break;
		case '*':return num1*num2;break;
		case '/':return num1/num2;break;
		default : return 'E';
	}
	#endif
	
}