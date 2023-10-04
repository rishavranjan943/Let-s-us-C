#include<stdio.h>
void roman(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0)
    {
        if(n>1000)
        {
            int q=n/1000;
            for(int i=1;i<=q;i++)
            {
                printf("M");
            }
            n=n%1000;
        }
        if(n>500)
        {
            int q=n/500;
            for(int i=1;i<=q;i++)
            {
                printf("D");
            }
            n=n%500;
        }
        if(n>100)
        {
            int q=n/100;
            for(int i=1;i<=q;i++)
            {
                printf("C");
            }
            n=n%100;
        }
        if(n>50)
        {
            int q=n/50;
            for(int i=1;i<=q;i++)
            {
                printf("L");
            }
        }
        if(n>10)
        {
            int q=n/10;
            for(int i=1;i<=q;i++)
            {
                printf("X");
            }
        }
        if(n>5)
        {
            int q=n/5;
            for(int i=1;i<=q;i++)
            {
                printf("V");
            }
            n=n%5;
        }
        if(n>1)
        {
            int q=n/1;
            for(int i=1;i<=q;i++)
            {
                printf("|");
            }
            n=n%1;
        }

    }
}