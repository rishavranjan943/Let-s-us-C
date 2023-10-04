#include<stdio.h>
#include<math.h>
void s(double);
void c(double);
void t(double);
void p(double);
int main()
{
    double a=0.2;
    s(a);
    c(a);
    t(a);
    p(a);
    return 0;
}
void s(double a)
{
    double b=sin(a);
    printf("%lf\n",b);
}
void c(double a)
{
    double b=cos(a);
    printf("%lf\n",b);
}
void t(double a)
{
    double b=tan(a);
    printf("%lf\n",b);
}
void p(double a)
{
    double b=pow(a,a);
    printf("%lf",b);
}