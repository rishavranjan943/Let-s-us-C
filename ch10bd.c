// CONVERT TO BINARY :
#include<stdio.h>
#include<math.h>
int bi(int);
int bir(int);
int main()
{
    int n,a,b;
    printf("Enter the number : ");
    scanf("%d",&n);
    a=bi(n);
    b=bir(n);
    printf("Binary Equivalent of %d ",n);
    printf("\nBy Non Recusion : %d",a);
    printf("\nBy Recursion : %d",b);
    return 0;
}
int bi(int n)
{
    int s=0,r,i=0;
    while(n != 0)
    {
        r=n%2;
        s=s+pow(10,i)*r;
        i++;
        n=n/2;
    }
    return s;
}
int bir(int n)
{
    if(n==0)
    return 0;
    else
    {
       return (n % 2 + 10 * bir(n/2));
    }
}