#include<stdio.h>
void fibo(int,int);
int main()
{
    int i=0;
    int j=1;
    printf("%d %d ",i,j);
    fibo(i,j);
    return 0;
}
void  fibo(int a,int b)
{
    if(a+b<100)
    {
        int sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    fibo(a,b);
}