// Calling by value and reference
#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
    int i;
    int marks[]={65,67,89,60,80};
    for(i=0;i<=4;i++)
    display1(marks[i]);
    printf("\n");
    for(i=0;i<=4;i++)
    display2(&marks[i]);
    return 0;
}
void display1(int n)
{
    printf("%d\t",n);
}
void display2(int *m)
{
    printf("%d\t",*m);
}