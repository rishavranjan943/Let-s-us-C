#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct info
{
    char name[10];
    int roll;
    int age;
};
int main()
{
    int l;
    printf("Enter number of students : ");
    scanf("%d",&l);
    struct info p[l];
    for(int i=0;i<l;i++)
    {
        printf("Enter the name : ");
        scanf("%s",p[i].name);
        printf("Enter roll : ");
        scanf("%d",&p[i].roll);
        printf("Enter the age : ");
        scanf("%d",&p[i].age);
    }
    while(1)
    {
        printf("Press 1 to update name.\n");
        printf("Press 2 to update roll.\n");
        printf("Press 3 to update age.\n");
        printf("Press 0 to exit.\n");
        int n;
        printf("Enter the number : ");
        scanf("%d",&n);
        switch(n)
        {
            case 1 : int j;
                    printf("Enter the serial number of student for which u want to make changes : ");
                    scanf("%d",&j);
                    char n1[10];
                    printf("Enter the new name : ");
                    scanf("%s",n1);
                    strcpy(p[j-1].name,n1);
                    break;
            case 2 : int k;
                    printf("Enter the serial number of student for which u want to make changes : ");
                    scanf("%d",&k);
                    int r;
                    printf("Enter new roll : ");
                    scanf("%d",&r);
                    p[k-1].roll=r;
                    break;
            case 3 : int l;
                    printf("Enter the serial number of student for which u want to make changes : ");
                    scanf("%d",&l);
                    int a;
                    printf("Enter the new age : ");
                    scanf("%d",&a);
                    p[l-1].age=a;
                    break;
            case 0 : goto stop;
                    break;
            default : printf("You enter wrong input.");
                    break;
        }
    }
   stop: for(int b=0;b<l;b++)
    {
        printf("%s\t",p[b].name);
        printf("%d\t",p[b].roll);
        printf("%d\t",p[b].age);
        printf("\n");
    }
    printf("Press 1 if u want to search with name\n");
    printf("Press 2 if u want to search with roll\n");
    printf("Press 3 if u want to search with age\n");
    printf("Press 0 to exit\n");
    int h;
    while(1)
    {
        printf("Enter the number : \n");
    scanf("%d",&h);
        switch(h)
    {
        case 1 : char nn[10];
                 printf("Enter the name to be searched : \n");
                 scanf("%s",nn);
                 for(int g=0;g<l;g++)
                 {
                    if(strcmp(p[g].name,nn)==0)
                    {
                        printf("%s\t",p[g].name);
                        printf("%d\t",p[g].roll);
                        printf("%d\t",p[g].age);
                        printf("\n");
                    }
                 }
                 break;
        case 2 : int rr;
                 printf("Enter the roll to be searched : \n");
                 scanf("%d",&rr);
                 for(int v=0;v<l;v++)
                 {
                    if(p[v].roll==rr)
                    {
                        printf("%s\t",p[v].name);
                        printf("%d\t",p[v].roll);
                        printf("%d\t",p[v].age);
                        printf("\n");
                    }
                 }
                 break;
        case 3 : int aa;
                printf("Enter the age to be searched : ");
                scanf("%d",&aa);
                for(int u=0;u<l;u++)
                {
                    if(p[u].roll==aa)
                    {
                        printf("%s\t",p[u].name);
                        printf("%d\t",p[u].roll);
                        printf("%d\t",p[u].age);
                        printf("\n");

                    }
                }
                break;
        case 0 : exit(0);
                 break;
        default : printf("Enter coorect number");
                  break;
    }
    }
    return 0;
}