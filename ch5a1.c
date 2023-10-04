#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        int t;
        printf("Enter the working houe of Employee %d : ",i);
        scanf("%d",&t);
        if(t>40)
        {
            printf("Number of extra hour worked : %d\n",t-40);
            int p=12*(t-40);
            printf("The extra pay of Employee %d is %d\n",i,p);
        }
        else
        printf("No overpayment\n");
    }
   
    return 0;
}