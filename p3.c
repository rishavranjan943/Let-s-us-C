#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i==3 || j==1 || j==6 || (i==2 && (j==2 || j==5)) || (i==4 && (j==2 || j==5)))
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
}