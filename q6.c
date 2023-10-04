#include<stdio.h>
struct info
{
    char name[20];
    int roll;
    float m1,m2,m3;
};
int main()
{
    int n,i;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct info p[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name : ");
        scanf("%s",p[i].name);
        printf("Enter roll ");
        scanf("%d",&p[i].roll);
        printf("Enter the marks of 3 subjects : ");
        scanf("%f %f %f",&p[i].m1,&p[i].m2,&p[i].m3);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t",p[i].name);
        printf("%d\t",p[i].roll);
        printf("%f\t",p[i].m1);
        printf("%f\t",p[i].m2);
        printf("%f\t",p[i].m3);
        printf("%f\n",(p[i].m1+p[i].m2+p[i].m3)/3);
    }
    return 0;
}