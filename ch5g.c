#include<stdio.h>
int main()
{
    int i,c1=0,c2=0,c3=0;
    // c1 represents positive input.
    // c2 represents negative input.
    // c3 represents  zero input.
    char c;
    do{
        printf("Enter the number : ");
        scanf("%d",&i);
        if(i>0)
        c1++;
        if(i<0)
        c2++;
        if(i==0)
        c3++;
        printf("Press Y or y if want to continue.\n");
        printf("Enter the character : ");
        scanf(" %c",&c);
    }while(c=='y' || c=='Y');
    printf("Number of positive input : %d\n",c1);
    printf("Number of negative input : %d\n",c3);
    printf("Number of zero input : %d\n",c2);
    return 0;
}