/*
 ============================================================================
 Name        : transpose_of_3by3_matrix.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

void main()
{
    float matrix[3][3];
    float t_matrix[3][3];
    // take the matrix from the user
    char i=0 , j=0 ;

    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the index [%d][%d] = ",i,j);
            fflush(stdout); fflush(stdin);
            scanf("%f",&matrix[i][j]);
        }
        printf("\n");
    }
    //print the matrix
    printf("the matrix is : \n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %0.2f  ",matrix[i][j]);
        }
        printf("\n");
    }
    //transpose the matrix
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t_matrix[i][j] = matrix[j][i] ;
        }
    }
    //print the transposed matrix
    printf("the transposed matrix  is : \n");
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("  %0.2f  ",t_matrix[i][j]);
        }
        printf("\n");
    }
}
