#include<stdio.h>
int main()
{
    static int a[]={0,1,2,3,4};
    printf("%u\n",&a[0]);
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("%u %u %d\n",p,*p,*(*p));
    return 0;
}