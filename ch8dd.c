#include<stdio.h>
int leap(int);
int main()
{
    int yr;
    printf("Enter the year : ");
    scanf("%d",&yr);
    int c;
    c= leap(yr);
    printf("0 stands for non leap\n");
    printf("1 stands for leap\n");
    printf("%d",c);
    return 0;
}
int leap(int yr)
{
    if(yr%100==0)
    {
        if(yr%400==0)
        return (1);
        else
        return (0);
    }
    else
    {
        if(yr%4==0)
        return (1);
        else
        return (0);
    }
}