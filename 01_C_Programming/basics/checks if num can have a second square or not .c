/* 
checks if num can have a second square or not
*/
#include<stdio.h>
int main(){
	while(1){
		/*float num=0 , x=0 , y =0;
		unsigned char i =0 , flag=0;
		scanf("%f",&num);
		x=num/2;
		for(i=2; i<=x ; i++ ){
			y=num / (i*i);
			if (1==y){
				printf("%f is perfect square \n",num);
				flag=1;
				break;
			}
		}
		if(0==flag)
			printf("%f is NOT perfect square \n",num);*/
					// optimised code
		int num=0 ;
		unsigned char i =0 , flag=0;
		scanf("%d",&num);
		for(i=2; i<=(num/2) ; i++ ){
			if ( num==(i*i) ){
				printf("%d is perfect square \n",num);
				flag=1;
				break;
			}
		}
		if(0==flag)
			printf("%d is NOT perfect square \n",num);
	}
	
}
