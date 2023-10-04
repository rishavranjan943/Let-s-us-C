#include<stdio.h>
struct student {
    int roll;
    char name[100];
    char cour[100];
    char dept[100];
    int yr;
}stud[450];
int main()
{
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the roll : ");
        scanf("%d",&stud[i].roll);
        printf("Enter the name : ");
        scanf("%s",stud[i].name);
        printf("Enter the course :  ");
        scanf("%s",stud[i].cour);
        printf("Enter the department : ");
        scanf("%s",stud[i].dept);
        printf("Enter the year of joining : ");
        scanf("%d",&stud[i].yr);
    }
    for(i=0;i<n;i++)
    {
        if(stud[i].yr==2020)
        printf("%s\n",stud[i].name);
    }
    return 0;
}