#include<stdio.h>
int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    int c;
    c=gcd(a,b);
    printf("%d",c);
    return 0;
}
gcd (int a,int b)
{
    int num,den,quo,rem;
    if(a>b)
    {
        num=a;
        den=b;
    }
    else
    {
        num=b;
        den=a;
    }
    while(rem!=0)
    {
        quo=num/den;
        rem=num-quo*den;
        num=den;
        den=rem;
    }
    return num;
}
