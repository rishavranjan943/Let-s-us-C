#include<stdio.h>
#include<math.h>
void p(int,int);
int main()
{
    int a,b;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    p(a,b);
    return 0;
}
void p(int a,int b)
{
    int c = pow(a,b);
    printf("%d",c);
    
}
