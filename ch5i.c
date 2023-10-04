#include<stdio.h>
int main()
{
    int how,num;
    printf("Enter how many numbers you want to enter : ");
    scanf("%d",&how);
    printf("Enter the number : ");
    scanf("%d",&num);
    int max,min;
    max=num;
    min=num;
    // for(int i=1;i<how;i++)
    // {
    //     printf("Enter the number : ");
    //     scanf("%d",&num);
    //     if(num>max)
    //     max=num;
    //     if(num<min)
    //     min=num;
    // }
    int i=1;
    while(i<how)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        if(max<num)
        max=num;
        if(min>num)
        min=num;
        i++;
    }
    int range=max-min;
    printf("The range = %d",range);
    return 0;
}