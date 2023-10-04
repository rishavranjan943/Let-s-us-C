#include<stdio.h>
int main()
{
    int y;
    printf("Enter the year:");
    scanf("%d" , &y);
    (y%100==0)?((y%400==0)?printf("LEAP"):printf("NOT LEAP")):((y%4==0)?printf("LEAP"):printf("NOT LEAP"));
    return 0;
}