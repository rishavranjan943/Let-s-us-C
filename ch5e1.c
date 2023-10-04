// TO CHECKK WHETHER NUMBER IS ARMSTRONG OR NOT :
#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0,s=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n;
    int b=n;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    while(b!=0)
    {
        r=b%10;
        s=s+(pow(r,c));
        b=b/10;
    }
    if(n==s)
    printf("Armstrong");
    else
    printf("Not armstrong");
    return 0;
}