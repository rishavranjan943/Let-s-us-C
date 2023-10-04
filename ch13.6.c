// Passing array to function
#include<stdio.h>
void display1(int *,int);
void display2(int [],int);
int main()
{
    int num[]={34,67,78,96,56,87};
    display1(&num[0],6);
    display1(num,6);
    printf("\n");
    display2(&num[0],6);
    return 0;
}
void display1(int *m,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Element = %d\t",*m);
        m++;
    }
}
void display2(int m[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Element = %d\t",m[i]);
    }
}
