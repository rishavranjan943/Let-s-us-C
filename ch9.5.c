#include<stdio.h>
#include<math.h>
double s(double);
double c(double);
double t(double);
double p(double,double);
int main()
{
    double a=0.5;
    double d=0.2,b;
    b=s(a);
     printf("%lf\n",b);
    b=c(a);
     printf("%lf\n",b);
    b=t(a);
     printf("%lf\n",b);
    b=p(a,d);
     printf("%lf\n",b);
    return 0;
}
double s(double a)
{
    double b = sin(a);
    return b;
}
double c(double a)
{
    double b = cos(a);
    return b;
}
double t(double a)
{
    double b = tan(a);
    return b;
}
double p(double a,double d)
{
    double b = pow(a,d);
    return b;
}