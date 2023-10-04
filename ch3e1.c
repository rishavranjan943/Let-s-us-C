#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int t=n;
    int s=0;
    while(n!=0)
    {
        int r;
        r=n%10;
        s=(10*s)+r;
        n=n/10;
    }
    printf("The reversed number = %d\n",s);
    if(t==s)
    printf("Reversed number and orginal numbers are same.");
    else
    printf("Reversed number and orignal number are not same.");
    return 0;
}