#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter a,b :");
    scanf("%d%d" , &a,&b);
    t = a;
    a = b;
    b = t;
    printf("New a and b are %d and %d." , a , b);
    int p,q;
    printf("\nEnter p,q :");
    scanf("%d%d" , &p,&q);
    p = p+q;
    q = p-q;
    p = p-q;
    printf("New p and q are %d and %d." , p ,q);
    int r,s;
    printf("\nEnter r,s :");
    scanf("%d%d" , &r,&s);
    r = r^s;
    s = r^s;
    r = r^s;
    printf("New r and s are %d and %d." , r ,s);
    return 0;
}