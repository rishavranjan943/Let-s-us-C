#include<stdio.h>
double fact(double);
int main()
{
    double a,b;
    printf("Enter the number : ");
    scanf("%lf",&a);
    b=fact(a);
    printf("%lf",b);
    return 0;
}
double fact(double a)
{
    double f=1;
    for(double c=1;c<=a;c++)
    {
        f=f*c;
    }
    return(f);
}