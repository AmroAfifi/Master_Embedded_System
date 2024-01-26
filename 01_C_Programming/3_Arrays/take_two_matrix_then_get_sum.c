
#include <stdio.h>
void main(){
    float a1[2][2] , a2[2][2] ,sum[2][2];
    char i , j;
    printf("enter the elements of the first array :\n");
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            printf("enter elem%d%d: ",i+1,j+1);
            scanf("%f",&a1[i][j]);
        }
    }

    printf("enter the elements of the second array :\n");
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            printf("enter elem%d%d: ",i+1,j+1);
            scanf("%f",&a2[i][j]);
        }
    }

    //sum of the two arrays
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            sum[i][j]=a1[i][j] + a2[i][j] ;
        }
    }
    //printing the sum
    printf("the sum of the two arrays is :\n");
    for(i=0 ;i<2 ;i++){
        for(j=0 ;j<2 ;j++){
            printf("    %.2f",sum[i][j]);
        }
        printf("\n");
    }
}
