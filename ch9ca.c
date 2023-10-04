#include<stdio.h>
float arth(int,int,int,int,int,float *,float *);
int main()
{
    int a,b,c,d,e;
    float sum,avg;
    printf("Enter the number :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    arth(a,b,c,d,e,&sum,&avg);
    printf("Sum = %f\n",sum);
    printf("Average = %f",avg);
    return 0;
}    
float arth(int a,int b,int c,int d,int e,float *x,float *y)
// IN PLACE OF x AND y WE CAN USE sum AND avg.THEY ACT AS INDEPENDENT VARIABLE.
{
    *x=a+b+c+d+e;
    *y=*x/5;
}