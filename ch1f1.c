#include<stdio.h>
int main()
{
    int a,b;
    a=1189;
    b=841;
    for(int i=0;i<=8;i++)
    {
        printf("Dimensions of A%d : %d*%d\n",i,a,b);
        int t=a;
        a=b;
        b=t/2; 
    }
    return 0;
}