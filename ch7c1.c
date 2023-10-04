#include<stdio.h>
int main()
{
    int n;
    printf("Enter 1 to calculate factorial\n");
    printf("Enter 2 to check prime or composite\n");
    printf("Enter 3 to check even or odd\n");
    printf("Enter 4 to exit\n");
    printf("Enter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
       case 1: printf("Enter the number : ");
       scanf("%d",&n);
       int f=1;
       for(int i=1;i<=n;i++)
       {
        f=f*i;
       }
       printf("%d",f);
       break;
       case 2: printf("Enter the number : ");
       scanf("%d",&n);
       int c=0;
       for(int i=2;i<n;i++)
       {
        if(n%i==0)
        c++;
       }
       if(c==0)
       printf("Prime");
       else
       printf("Not prime");
       break;
       case 3:printf("Enter the number : ");
       scanf("%d",&n);
       if(n%2==0)
       printf("Even");
       else
       printf("Odd");
       break;
       case 4 : printf("Exit");
       break;
       default : printf("Enter the correct number");
    }
}