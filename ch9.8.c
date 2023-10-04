#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    swap(&a,&b);
     printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}