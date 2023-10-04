#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
    printf("The absolute value of %d is %d",n,-1*n);
    else
    printf("The absolute value of %d is %d",n,n);
    return 0;
}