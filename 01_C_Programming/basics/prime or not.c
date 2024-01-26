/*
Write a program that take an integer from user and print if this number is prime or not
*/
#include<stdio.h>
void main(){
    long num=0;
    while (1){
        short i=2 ;
        char flag=0;
        scanf("%ld",&num);
        for(i=2; i<= num/2; i++){
            if (num%i ==0){
                printf("not prime\n");
                flag=1;
                break;
            }
        }
        if (flag == 0){
            printf("prime\n");
        }
    }
}
