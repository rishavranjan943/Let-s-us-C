#include<stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter the number till which sum you want : ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int a)
{
    if(a==1)
    return 1;
    int s=sum(a-1)+a;
    return s;
}