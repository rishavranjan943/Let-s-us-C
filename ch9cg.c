#include<stdio.h>
int gcd(int,int);
int main()
{
    int m,n;
    printf("Enter the numbers : ");
    scanf("%d %d",&m,&n);
    int a;
    a = gcd(m,n);
    printf("GCD = %d",a);
    return 0;
}
int gcd(int m,int n)
{
    int num,den;
    if(m>=n)
    {
        num=m;
        den=n;
    }
    else
    {
        num=n;
        den=m;
    }
    int rem,quo,div;
    while(rem!=0)
    {
        
        quo=num/den;
        rem=num-(quo*den);
        div=den;
        num=den;
        den=rem;
    }
    return div;
}