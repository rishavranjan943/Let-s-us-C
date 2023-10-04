#include<stdio.h>
#include<math.h>
// for inverrse function use asin / acos / atan
int main()
{
    float x,y;
    printf("Enter the coordinates :");
    scanf("%f%f" ,  &x,&y);
    float p = x*x + y*y ;
    float r = pow(p,0.5);
    float pi = atan(y/x);
    // atan is inverse function
    printf("Polar coordinate is : %0.2f,%0.2f" , r,pi);
    return 0;
}