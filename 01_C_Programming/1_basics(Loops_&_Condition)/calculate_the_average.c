#include <stdio.h>

void main(){
	float num , sum=0 , avg;
	char max , i=0;
	printf (" enter the max inputs: \n");
	scanf("%d",&max);
	for(i=1 ;i<=max ; i++){
        printf("enter the num%d: ",i);
        scanf("%f",&num);
        if(num<=0.0){break;}
        else{
            sum=sum+num;
        }
	}
	avg=sum/(i-1);
	printf("the average =%.2f ",avg);

}
