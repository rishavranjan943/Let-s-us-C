#include<stdio.h>
int impr(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d",impr(n));
    return 0;
}
int impr(int n)
{
    int s=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    return s;
}