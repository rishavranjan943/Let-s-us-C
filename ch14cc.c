#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter the dimmension of matrix : ");
    scanf("%d %d",&i,&j);
    int mat[i][j],tra[j][i];
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
            printf("Enter the element of mat[%d][%d] : ",a,b);
            scanf("%d",&mat[a][b]);
        }
    }
    printf("The entered matrix : \n");
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
            printf("%d\t",mat[a][b]);
        }
        
                printf("\n");
        
     }
    for(a=0;a<i;a++)
    {
        for(b=0;b<j;b++)
        {
            tra[b][a]=mat[a][b];
        }
    }
    printf("The transpose of matrix : \n");
    for(a=0;a<j;a++)
    {
        for(b=0;b<i;b++)
        {
            printf("%d\t",tra[a][b]);
        }
        
            printf("\n");
    }
         return 0;
 }