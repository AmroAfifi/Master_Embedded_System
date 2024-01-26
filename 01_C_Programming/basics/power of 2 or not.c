/*
Write a program that take an integer from user and print if this is a power of 2 or not, e.g:
16, 8, 4, 32, 64, 128 > yes
25, 9, 49 > no
*/
#include<stdio.h>
int main(){
    unsigned short num=0;
    while (1){
        unsigned short i=1 ;
        char flag =1;
        scanf("%hi",&num);
        while(i<=num){
            i=i*2;
            if(i == num){
                printf("pow of 2 \n");
                flag =0;
                break;
            }
        }
        if (1==flag){
            printf("NOT \n");
        }
    }
}
