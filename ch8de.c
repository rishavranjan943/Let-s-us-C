#include<stdio.h>
void p(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    p(n);
    return 0;
}
void p(int n)
{
    for(int i=2;n>1;i++)
    {
        while(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
    }
}