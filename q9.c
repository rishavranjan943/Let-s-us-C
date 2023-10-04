#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct info{
        char name[50];
        int age;
        float w;
    };
    int n;
    printf("Enter the number of person : ");
    scanf("%d",&n);
    struct info *ptr;
    ptr = (struct info*)calloc(n,sizeof(int));
    printf("Enter the info : ");
    for(int i=0;i<n;i++)
    {
        printf("Enter name : ");
        scanf("%s",ptr[i].name);
        printf("Enter age : ");
        scanf("%d",&ptr[i].age);
        printf("Enter weight : ");
        scanf("%f",&ptr[i].w);
    }
    for(int i=0;i<n;i++)
    {
        
        printf("%s",ptr[i].name);
        
        printf("%d",ptr[i].age);
        
        printf("%f",ptr[i].w);
    }
}