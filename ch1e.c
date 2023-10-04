#include<stdio.h>
int main()
{
    float l,b,r;
    // l and b are length and breadth of rectangle
    // r is radius of circle
    printf("Enter length and breadth  of rectangle: ");
    scanf("%f %f" , &l,&b);
    printf("the perimeter of rectaangle is %f\n" , (l+b)*2);
    printf("The area of rectangle is %f\n", l*b);
    printf("Enter radius of circle: ");
    scanf("%f" , &r);
    printf("The area of circle is %f\n" , 3.14*r*r);
    printf("The perimeter of circle is %f\n" , 2*3.14*r);
    return 0;
}