#include<stdio.h>
void f(int);
int main()
{
    int a=1;
    f(a);
    return 0;
}
void f(int a)
{
    a=1;
    printf("%d %d %d",a,++a,a++);
}
