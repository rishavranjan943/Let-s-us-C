#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r;
    printf("Enter coordinate of center :");
    scanf("%d%d" , &x,&y);
    printf("Enter radius :");
    scanf("%d" , &r);
    int a,b;
    printf("Enter a,b :");
    scanf("%d%d" , &a,&b);
    float c = pow(x-a,2);
    float d = pow(y-b,2);
    float e = c+d;
    float f = pow(e,0.5);
    // f is distance between point and center
    if(f>r)
    printf("Point lies outside circle.");
    else if(f==r)
    printf("Point lies on circle.");
    else
    printf("Point lies inside circle.");
    return 0;
}