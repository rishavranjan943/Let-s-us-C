#include<stdio.h>
int check(int,int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int k=check(n,2);
    if(k==1)
        printf("Prime");
    else if(k==0)
        printf("Not prime");
    return 0;
}
int check(int a,int b)
{
    if(b==a)
        return 1;
    else
    {
        if(a%b==0)
            return 0;
        else
            return check(a,b+1);
    }
}