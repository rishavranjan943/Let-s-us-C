#include<stdio.h>
#include<string.h>
struct info{
    char name[100];
    int roll;
    int age;
};
int main()
{
    struct info ss[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name : ");
        scanf("%s",ss[i].name);
        printf("Enter the roll : ");
        scanf("%d",&ss[i].roll);
        printf("Enter the age : ");
        scanf("%d",&ss[i].age);
    }
    printf("Enter 1 to change name\n");
    printf("Enter 2 to change roll no.\n");
    printf("Enter 3 to change age\n");
    printf("0 to exit\n");
    