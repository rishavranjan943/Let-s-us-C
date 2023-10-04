#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("ENter the number : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    for(int i=2;n>1;i++)
    {
       while(n%i==0)
       {
        printf("%d\n",i);
        n=n/i;
       }
    }
}