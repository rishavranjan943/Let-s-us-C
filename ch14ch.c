#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the dimmension of matrix : ");
    scanf("%d %d",&r,&c);
    int m1[r][c],m2[r][c],m3[r][c];
    printf("Taking input for M1 matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element of m1[%d][%d] : ",i,j);
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Taking input for M2 matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the element of m2[%d][%d] : ",i,j);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("The first matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            m3[i][j]=m1[i][j] + m2[i][j];
        }
    }
    printf("The addition of two matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}