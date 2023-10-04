// CALCULATE SUM OF 3 NUMBERS USING FUNCTION :
#include<stdio.h>
int calsum(int x,int y,int z);
int main()
{
    int a,b,c,s;
    // IT IS ADVISABLE TO USE SAME VARIABLE IN BOTH CALSUM AND MAIN FUNCTION.
    // NO PROBLEM IN USING SAME VARIABLE AS IT IS USED SEPERATELY IN 2 FUNCTIONS.
    printf("Enter 3 numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    s=calsum(a,b,c);
    printf("Sum of 3 numbers = %d",s);
    return 0;
}
int calsum(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return (d);
}