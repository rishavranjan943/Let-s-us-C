#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("Enter cp :");
    scanf("%f" , &cp);
    printf("Enter sp :");
    scanf("%f" , &sp);
    if(sp>cp)
    {
        printf("Profit is made by seller.\n");
        printf("Profit = %f" , sp-cp);
    }
    else
    {
        if(sp==cp)
        printf("No profit and no loss.");
        else
        {
            printf("Loss is made by seller.\n");
            printf("Loss = %f" , cp-sp);
        }
    }
    return 0;
}