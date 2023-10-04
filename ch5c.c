#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter a and b : ");
    scanf("%f%f" , &a,&b);
    printf("%f to power %f = %f" ,a,b,(pow(a,b)));
    return 0;
}