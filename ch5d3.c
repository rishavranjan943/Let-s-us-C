#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>=0 && n<=225)
    printf("%c = %d",n,n);
    else
    printf("No coressponding character.");
    return 0;
}