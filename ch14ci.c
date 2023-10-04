#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k=0;
    printf("Enter the dimmension of matrix 1 : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the dimmension of matrix 2 : ");
    scanf("%d %d",&r2,&c2);
    int m1[r1][c1],m2[r2][c2],m3[r1][c2];
    if(c1 != r2)
    printf("Multiplication not possible.");
    else
    {
        printf("Input of matrix 1 : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Enter the element of m1[%d][%d] : ",i,j);
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Input of matrix 2 : \n"); 
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("Enter the element of m2[%d][%d] : ",i,j);
                scanf("%d",&m2[i][j]);
            }
        }
        printf("Matrix 1 : \n"); 
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",m1[i][j]);
            }
            printf("\n");
        }
        printf("Matrix 2 : \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",m2[i][j]);
            }
            printf("\n");
        }
        // Multiplying matrix : 
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                m3[i][j]=0;
                for(k=0;k<r2;k++)
                { 
                    m3[i][j]= m3[i][j] + m1[i][k] * m2[k][j];
                }
            }
        }
        printf("Multiplication of two matrix : \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",m3[i][j]);
            }
            printf("\n");
        }
 }
     return 0;
}