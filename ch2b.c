#include<stdio.h>
int main()
{
    int n;
    printf("Enter 5 digit number :");
    scanf("%d" , &n);
    int a=n,c=0;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    int s=0;
    for(int i=1;i<=c;i++)
    {
        int r;
        r=n%10;
        s=(10*s)+r;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}