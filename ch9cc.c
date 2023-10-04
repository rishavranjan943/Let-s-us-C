// SINE SERIESS:
#include<stdio.h>
#include<math.h>
float fact(int);
int main()
{
    int n;
    printf("Enter the limit of sine series : ");
    scanf("%d",&n);
    float x;
    printf("Enter the angle (in radians) : ");
    scanf("%f",&x);
    float sin=0;
    for(int i=1;i<=n;i++)
    {
        sin=sin+(((pow(-1,i+1))*(pow(x,2*i-1)))/fact(2*i-1));
    }
    printf("%f",sin);
}
float fact(int a)
// a is same as 2*i-1.
{
    int f=1;
    for(int k=1;k<=a;k++)
    {
        f=f*k;
    }
    return f;
}
