#include<stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("The Multiplication Table of %d : ",n);
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}