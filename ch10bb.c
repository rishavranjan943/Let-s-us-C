#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n)
{
    if(n==1)
    return ;
    int k=2;
    while(n%k !=0)
    {
        k++;
    }
    printf("%d ",k);
    prime(n/k);
}