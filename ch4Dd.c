#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("Enter a,b,c");
    scanf("%f%f%f" , &a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Trinagle is valid.");
        if(a==b && b==c)
        printf("Equilateral Triangle");
        else if ((pow(a,2)+pow(b,2)==pow(c,2) || pow(b,2)+pow(c,2)==pow(a,2) || pow(c,2)+pow(a,2)==pow(b,2)))
        printf("Right Triangle");
        else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
        printf("Isoceles triangle");
        else if((a!=b!=c))
        printf("Scalene  trinagle");
    }
    else
    printf("Triangle is not valid.");
    return 0;
}