#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,d,p,sum=0;
    printf("Enter number : ");
    scanf("%f",&x);
    d=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        p = (pow(d,i))*0.5;
        sum=sum+p;
    }
    sum=sum+d;
    printf("%0.2f",sum);
    return 0;
}