#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1,y1 :");
    scanf("%d%d" , &x1,&x2);
    printf("Enter x2,y2 :");
    scanf("%d%d" , &x2,&y2);
    printf("Enter x3,y3 :");
    scanf("%d%d" , &x3,&y3);
    float a;
    a = (x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
    if(a==0)
    printf("lie on same line.");
    else
    printf("Not on same line.");
    return 0;
}