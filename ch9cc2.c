// PRINT e TO POWER X SERIES : 
#include<stdio.h>
void s(float);
int main()
{
    float x;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    s(x);
    return 0;
}
void s(float x)
{
    float t=x,s=1;
    int n;
    s=s+t;
    printf("Enter the limit of e to power : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        t=(t*x)/i;
        s=s+t;
    }
    printf("%f",s);
}