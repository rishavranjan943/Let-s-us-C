// sum of number 
#include<stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int result=sum(num);
    printf("%d",result);
    return 0;
}
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n%10 + sum(n/10);
}