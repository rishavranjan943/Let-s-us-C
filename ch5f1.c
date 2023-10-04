#include<stdio.h>
int main()
{
    int l;
    for(int i=1;i<=4;i++)
    {
        int p;
        // p stands for number of matchstick picked by user.
        printf("Enter the number of matchstick picked by user : ");
        scanf("%d",&p);
        if(p>0 && p<=4)
        {
            int c=5-p;
            // c stands for matchstick picked by computer.
            printf("Number of matchstick picked by computer : %d\n",c);
        }
        else
        printf("Enter the correct input");
        l=21-(5*i);
        // l means number of matchstick left.
        printf("The number of matchstick left : %d\n",l);
    }
    printf("Its user turn to pick up matchstick and number of matchstick left is 1.\n");
    printf("So, automatically computer will not be able to pick up matchstick after that.\n");
    printf("Therefore computer wins.");
    return 0;
}