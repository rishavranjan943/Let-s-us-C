#include<stdio.h>
int main()
{
    float a1,a2,a3;
    printf("Enter a1,a2,a3 :");
    scanf("%f%f%f" , &a1,&a2,&a3);
    int sum = a1+a2+a3;
    if(sum == 180)
    printf("Triangle is possible.");
    else printf("No triangle.");
    return 0;
}