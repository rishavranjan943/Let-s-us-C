#include<stdio.h>
int main()
{
    int i=1;
    float fact=1.0,t,sum=0;
    for(i;i<=7;i++)
    {
        fact = fact*i;
        t=i/fact;
        sum = sum+t;
    }
    printf("sum = %f",sum);
    return 0;
}