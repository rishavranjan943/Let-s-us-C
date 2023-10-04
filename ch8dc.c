#include<stdio.h>
void r(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    r(n);
    return 0;
}
void r(int n)
{
    if(n<=0)
    printf("Invalid Number");
    else if(n>0)
    {
        while(n!=0)
        {
            if(n>=1000)
            {
                int c=n/1000;
                for(int i=1;i<=c;i++)
                {
                    printf("M");
                }
                n=n%1000;
            }
            else if(n>=500)
            {
                int c=n/500;
                for(int i=1;i<=c;i++)
                {
                    printf("D");
                }
                n=n%500;
            }
            else if(n>=100)
            {
                int c=n/100;
                for(int i=1;i<=c;i++)
                {
                    printf("C");
                }
                n=n%100;
            }
            else if(n>=50)
            {
                int c=n/50;
                for(int i=1;i<=c;i++)
                {
                    printf("L");
                }
                n=n%50;
            }
            else if(n>=10)
            {
                int c=n/10;
                for(int i=1;i<=c;i++)
                {
                    printf("X");
                }
                n=n%10;
            }
            else if(n>=5)
            {
                int c=n/5;
                for(int i=1;i<=c;i++)
                {
                    printf("V");
                }
                n=n%5;
            }
            else if(n>=1)
            {
                int c=n/1;
                for(int i=1;i<=c;i++)
                {
                    printf("|");
                }
                n=n%1;
            }
        }
    }
}
