// CHECK WHETHER A NUMBER IS ARMSTRONG OR NOT
#include<stdio.h>
#include<math.h>
int armstr(int,int);
int main()
{
    int n,c=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int a=n;
    while(a !=0)
    {
        c++;
        a=a/10;
    }
    int r=armstr(n,c);
    if(n==r)
        printf("1");
    else
        printf("0");
    return 0;
}
int armstr(int x,int y)
{
    if(x==0)
        return 0;
    if(x>0)
        return (pow(x%10,y)) + armstr(x/10,y);
}