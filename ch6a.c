#include<stdio.h>
int main()
{
    int num,t,flag,i;
    printf("Enter the limit : ");
    scanf("%d",&num);
    for(t=2;t<=num;t++)
    // t varies from 2 to num.
    {  flag=0;
    // Every number is assumed to be prime.
       
         for(i=2;i<=t-1;i++)
        // i varies from 2 to n-1 and check if n is divisible by i or not.
        {
            if(t%i==0)
            {   flag=1;
            // The number which are not prime changes to f=1.
                 break;
            }
        }
        
            if(flag==0)
        
            printf("%d\t",t);
        // So here only prime gets printed.
        
    }
    
    return 0;
}