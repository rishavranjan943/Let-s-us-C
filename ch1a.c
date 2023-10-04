#include<stdio.h>
int main()
{
    int s;
    // s reprsents the basic salary
    float d,h;
    // d and h reprsents da and ra 
    printf("Enter Salary : ");
    scanf("%d" ,&s);
    d = (40*s)/100;
    h = (20*s)/100;
    printf("Gross Salary : %f" , s+d+h);
    return 0;
}