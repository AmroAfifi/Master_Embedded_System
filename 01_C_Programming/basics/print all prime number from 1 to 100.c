#include<stdio.h>
int main(){
	unsigned char num=0 ,i  , j;
	for( i=3 ; i<=100 ; i++){
		for(j=2 ; j<i ; j++){
			//num=i%j;
			if (i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d\n",i);
		}
		
	}
	
}