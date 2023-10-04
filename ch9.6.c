#include<stdio.h>
float square(float);
int main()
{
    float a,b;
    printf("Enter the numner : ");
    scanf("%f",&a);
    b = square(a);
    printf("The square of %0.2f = %0.2f",a,b);
    return 0;
}
float square(float a)
{
    float c = a*a;
    return (c);
}