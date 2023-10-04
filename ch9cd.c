// CIRULATORY 
#include<stdio.h>
int shift(int *,int *,int *);
int main()
{
    int x,y,z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);
    printf("Enter the value of z : ");
    scanf("%d",&z);
    shift(&x,&y,&z);
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    return 0;
}
int shift(int *x,int *y,int *z)
{
    int t;
    t=*x;
    *x=*z;
    *z=*y;
    *y=t;
}