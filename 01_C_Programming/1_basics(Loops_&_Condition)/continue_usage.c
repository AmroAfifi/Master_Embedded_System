#include <stdio.h>

void main(){
	int num ,product=1 , i=0;

	for(i=1 ;i<=4 ; i++){
        printf("enter the num%d: ",i);
        scanf("%d",&num);
        if(0==num){continue;}
        else{
            product*=num;
        }
	}
	printf("product= %d ",product);

}
