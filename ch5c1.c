#include<stdio.h>
int main()
{
    int a,b,p=1;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    printf("%d",p);
    return 0;
}