#include<stdio.h>
int main()
{
    int n=0;
    
    while(n>=0 && n<=225)
    {
        printf("%c = %d\n",n,n);
        n=n+1;
    }
    return 0;
}