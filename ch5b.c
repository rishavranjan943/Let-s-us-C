#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    int i=1;
    float fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf("Factorial = %f" ,fact);
    return 0;
}