#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter length and breadth :");
    scanf("%d%d" ,&l ,&b);
    int p = 2*(l+b);
    int a = l*b;
    if(a>p)
    printf("Area is greater than perimeter.");
    else if(a==p)
    printf("Area is equal to perimeter.");
    else
    printf("Area is smaller than perimeter.");
    return 0;
}