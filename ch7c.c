#include<stdio.h>
int main()
{
    int n,i,f=1;
    printf("1 : Factorial");
    printf("\n2 : Prime or not");
    printf("\n3 : Odd or Even");
    printf("\n4 : Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : printf("Enter the number : ");
                scanf("%d",&i);
                for(int j=1;j<=i;j++)
                {
                    f=f*j;
                }
                printf("Factorial of %d = %d",i,f);
                break;
        case 2 : printf("Enter the number : ");
                 scanf("%d",&i);
                int f=1;
                if(i>1)
                {
                 for(int j=2;j<i;j++)
                 {
                    if(i%j==0)
                    {   
                        printf("Not prime");
                        f=2;
                        break;
                    }
                 }
                    if(f==1)
                    printf("Prime");
                }
                else
                printf("Enter correct number");
                    break;
        case 3 : printf("Enter the number : ");
                 scanf("%d",&i);
                 if(i%2==0)
                 printf("Even");
                 else
                 printf("Odd");
                 break;
        case 4 : printf("Exit");
                 break;
        default : printf("Enter the correct number.");
    return 0;
}
}