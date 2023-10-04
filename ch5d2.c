#include<stdio.h>
int main()
{
    int n=0;
    printf("The ASCII values are : ");
    while(n>=0 && n<=225)
    {
        printf("%c = %d\n",n,n);
        n++;
    }
    return 0;
}