#include<stdio.h>
void circle(int ,float *,float *);
int main()
{
    int r;
    float peri,area;
    printf("Enter the radius : ");
    scanf("%d",&r);
    circle(r,&peri,&area);
    return 0;    
}
void circle(int r,float *x,float *y)
{
    *x=2*3.14*r;
    *y=3.14*r*r;
    printf("Perimeter = %f\n",*x);
    printf("Area = %f",*y);
}