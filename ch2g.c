#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the angle (in radians) :");
    scanf("%f" , &a);
    float b;
    b = (180*a)/3.14;
    printf("sin of angle = %f\n" , sin(b));
    printf("cos of angle = %f\n" , cos(b));
    printf("tan of anngle = %f\n" , tan(b));
    printf("cosec of angle = %f\n" , pow(sin(b),-1));
    printf("sec of angle = %f\n" , pow(cos(b),-1));
    printf("cot of angle = %f\n" , pow(tan(b),-1));
    return 0;
}