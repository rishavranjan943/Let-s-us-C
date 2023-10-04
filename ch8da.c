#include<stdio.h>
void fact(double);
int main()
{
    double a;
    printf("Enter the number : ");
    scanf("%lf",&a);
    fact(a);
    return 0;
}
void fact(double a)
{
    double f=1;
    for(double i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("%lf",f);
}