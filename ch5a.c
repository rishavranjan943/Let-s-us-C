#include<stdio.h>
int main()
{
    int n,w;
    n=1;
    int p;
    printf("Enter the no. of employee : ");
    scanf("%d" ,&p);
    // n represents the no. of E.
    // w represents the working hour of E.
    while(n<=p)
    {
        printf("\nEnter the working hour of E%d = ",n);
        scanf("%d",&w);
        if(w>40)
        {
            printf("The over time payment of E%d = %d",n,(w-40)*12);
        }
        else
        {
            printf("No overpayment");
        }
        n=n+1;
    }
    return 0;
}