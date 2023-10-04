// Average of marks obtained by students
#include<stdio.h>
int main()
{
    int marks[30];
    int i;
    for(i=0;i<=29;i++)
    {
        printf("Enter marks : ");
        scanf("%d",&marks[i]);
    }
    int sum=0;
    for(i=0;i<=29;i++)
    sum=sum+marks[i];
    float avg=sum/30;
    printf("Average = %f",avg);
    return 0;
}