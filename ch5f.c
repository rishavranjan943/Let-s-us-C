#include<stdio.h>
int main()
{
    int i=21;
    int u,c;
     printf("Total match sticks : %d",i);
    while(i>=1)
    {
       
        printf("\nEnter matck stick taken by human (1-4) : ");
        scanf("%d",&u);
        if(u>4)
        {
            printf("Invalid");
            break;
        }
        c=5-u;
        printf("Matchstick taken by computer :%d ",c);
    
       
        i=i-5;
        printf("\nMatchstick left :%d ",i);
         if(i==1)
       { printf("\nComputer wins");
        break;
    }

    }
    return 0;
}    