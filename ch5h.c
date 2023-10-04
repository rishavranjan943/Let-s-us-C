#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,c=0;
    float s = 0 ;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n;
    int b=n;
    while(b!=0)
    {
        c++;
        b=b/10;
    }
    while(a!=0)
    {
        r=a%8;
        s=(0.1*s)+r;
        a=a/8;
    }
    printf("%0.0f",s*(pow(10,(c-1))));
    return 0;
}