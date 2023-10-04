#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the angle(in rad):");
    scanf("%f" , &a);
    float b= (180*a)/3.14;
    float c = sin(b);
    float d = cos(b);
    float e = pow(c,2);
    float f = pow(d,2);
    float sum = e+f;
    printf("sin^2 + cos^2 = %0.0f",sum);
    return 0;
}