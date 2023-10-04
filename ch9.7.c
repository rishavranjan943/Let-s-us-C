#include<stdio.h>
void swap(int,int);
void swap1(int,int);
void swap2(int,int);
int main()
{
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    printf("Intial a = %d and b = %d\n",a,b);
    swap(a,b);
    swap1(a,b);
    swap2(a,b);
    return 0;
}
void swap(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("After swapping a = %d and b = %d\n",a,b);
}
void swap1(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a = %d and b = %d\n",a,b);
}
void swap2(int a,int b)
{
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping a = %d and b = %d",a,b);
}