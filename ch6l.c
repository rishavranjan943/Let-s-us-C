#include<stdio.h>
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int s=1;s<=4-i;s++)
        {
            printf(" ");
        }
        for(int n=1;n<=i;n++)
        {
            printf("%d  ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}