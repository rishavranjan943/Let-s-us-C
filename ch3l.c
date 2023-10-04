#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x,y :");
    scanf("%d%d" , &x,&y);
    if(y==0)
    printf("Lies on x axis.");
    else if(x==0)
    printf("Point lies on y axis.");
    else if(x==0 && y==0)
    printf("Point lies on origin.");
    else
    printf("Point lies in x-y plane.");
    return 0;
}