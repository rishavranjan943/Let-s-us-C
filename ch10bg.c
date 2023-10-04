#include<stdio.h>
void pprime(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    pprime(n);
    return 0;
}
void pprime(int a)
{
    if(a==1)
    return ;
    int k=2;
    while(a%k!=0)
    k++;
    printf("%d ",k);

    pprime(a/k);
}