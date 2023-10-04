#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year : ");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
        printf("Leap");
        else
        printf("Not leap");
    }
    else
    {
        if(yr%4==0)
        printf("Leap");
        else
        printf("Not leap");
    }
return 0;
}