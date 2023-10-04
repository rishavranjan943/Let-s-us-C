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
    while(1)
    {
        int n;
        scanf("%d",&n);
        switch(n)
        {
            case 1 : char n1[100],n2[100];
                     printf("Enter the name which u wnat to upadte : ");
                     scanf("%s",n1);
                     printf("Enter the new name : ");
                     scanf("%s",n2);
                     for(i=0;i<5;i++)
                     {
                        if(strcmp(ss[i].name,n1)==0)
                        {
                            strcpy(ss[i].name,n2);
                        }
                     }
                     break;
            case 2 : int a,b;
                     printf("Enter the old roll no. : ");
                     scanf("%d",&a);
                     printf("Enter the new roll no. :");
                     scanf("%d",&b);
                     for(i=0;i<5;i++)
                     {
                        if(ss[i].roll==a)
                        {
                            ss[i].roll=b;
                            
                        }
                     }
                     break;
            case 3 : int c,d;
                     printf("Enter the old age  : ");
                     scanf("%d",&c);
                     printf("Enter the new age : ");
                     scanf("%d",&d);
                     for(i=0;i<5;i++)
                     {
                        if(ss[i].age==c)
                        {
                            ss[i].age=d;
                            
                        }

                     }
                     break;
            default : printf("NO changes now");
                      break;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s\t",ss[i].name);
        printf("%d\t",ss[i].roll);
        printf("%d\t",ss[i].age);
        printf("\n");
    }

    return 0;
}