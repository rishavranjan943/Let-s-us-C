#include<stdio.h>
int main()
{
    int n;
    // i is the input
    printf("Enter  digit number : ");
    scanf("%d" , &n);
    int a=n,c=0;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    int q,s=0;
    for(int i=1;i<=c;i++)
    {
        q=n%10;
        s=s+q;
        n=n/10;
    }
    printf("%d",s);
}