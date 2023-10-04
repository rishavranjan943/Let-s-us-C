// SINE SERIES :
#include<stdio.h>
void s(float);
int main()
{
    float n;
    printf("Enter the number : ");
    scanf("%f",&n);
    s(n);
    return 0;
}
void s(float n)
{
    float t,s=0;
    t=n;
    s=s+t;
    for(int i=1;i<=9;i++)
    {
        t=(t*(-1)*n*n)/((2*i)*((2*i)+1));
        s=s+t;
    }
    printf("%0.2f",s);
}