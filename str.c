#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name :");
        // fgets(s.name,100,stdin);
        scanf("%s",s[i].name);
        printf("Enter the marks : ");
        scanf("%d",&s[i].marks);
    }
    int c=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(s[i].name[0]=='S')
        {c++;
        m=m+s[i].marks;
        }
    }
    printf("%d",m/c);
    return 0;
}