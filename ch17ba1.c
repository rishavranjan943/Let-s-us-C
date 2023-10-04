#include<stdio.h>
struct student {
    int roll;
    char name[100];
    char cour[100];
    char dept[100];
    int yr;
};
int main()
{
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct student stud[n];
    if(n<=450)
    {
        for(i=0;i<450;i++)
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
    }
    else
    printf("Not possible");
    return 0;
}