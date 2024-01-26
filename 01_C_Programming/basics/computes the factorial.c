/*
computes the factorial
*/
#include<stdio.h>
void main(){
    unsigned long num=0;
    while (1){
        unsigned short i=0 ;
        scanf("%ld",&num);
        for(i=num-1;i>=1;i--){
            num=num*i;
        }
        printf("the factorial is  %d \n",num);
    }
}