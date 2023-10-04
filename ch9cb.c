#include<stdio.h>
float cal(double,double,double,double *,double *);
int main()
{
    double a,b,c,average,percentage;
    printf("Enter the marks : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>100 || b>100 || c>100)
    printf("Impossible");
    else
    {
    cal(a,b,c,&average,&percentage);
    printf("Average = %lf\n",average);
    printf("Percentage = %lf",percentage);
    }
    return 0;
}
float cal(double a,double b,double c,double *average,double *percentage)
{
    *average = (a+b+c)/3;
    *percentage = ((a+b+c)/300)*100;
}