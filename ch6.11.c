#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0)
    {
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    printf("Prime");
    else
    printf("Not prime");
    }
    else
    printf("Enter positive number");
    return 0;
}