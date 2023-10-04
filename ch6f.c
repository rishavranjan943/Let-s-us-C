#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,n,q,c,d,e,f;
    int count=1;
    for(count=1;count<=10;count++)
    {
        printf("Enter principal : ");
        scanf("%f",&p);
        printf("Enter ROI : ");
        scanf("%f",&r);
        printf("Enter no. of times amount will compound in a year : ");
        scanf("%f",&q);
        printf("Enter no .of years : ");
        scanf("%f",&n);
        c=1+(r/q);
        d=n*q;
        e=pow(c,d);
        f=p*e;
        printf("a = %0.2f",f);
    }
    return 0;
}