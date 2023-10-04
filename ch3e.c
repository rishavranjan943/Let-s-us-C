#include<stdio.h>
int main()
{
    int n;
    printf("Enter 5 digit number :");
    scanf("%d" , &n);
    int a = n/10000;
    int b = n%10000;
    int c = b/1000;
    int d = b%1000;
    int e = d/100;
    int f = d%100;
    int g = f/10;
    int h = f%10;
    int no = (10000*h)+(1000*g)+(100*e)+(10*c)+(1*a);
    printf("Reverse number = %d\n" ,no);
    if(n==no)
    printf("Both are same.");
    else
    printf("Both are not same.");
    return 0;
}