#include<stdio.h>
void circle(int ,float *,float *);
int main()
{
    int r;
    float peri,area;
    printf("Enter the radius : ");
    scanf("%d",&r);
    circle(r,&peri,&area);
    // AFTER COMPLETING THE WORK OF VOID FUNCTION.
    // IT AGAIN COMES BACK TO THE NEXT LINE IN INT MAIN.
    // PERI = *X AND AREA = *Y.
    printf("Perimeter = %f\n",peri);
    printf("Area = %f",area);
    return 0;
}
void circle(int r,float *x,float *y)
{
    // X IS IN PLACE OF &PERI AND Y IS IN PLACE OF &AREA.
    *x=2*3.14*r;
    *y=3.14*r*r;
}