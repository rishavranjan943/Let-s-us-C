#include<stdio.h>
int main()
{
    int max[5][5],i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Enter the element of max[%d][%d]: ",i,j);
            scanf("%d",&max[i][j]);
        }
    }
    int m=max[0][0];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(max[i][j] > m)
                m=max[i][j];
        }
    }
    printf("%d",m);
    return 0;
}