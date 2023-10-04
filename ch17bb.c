#include<stdio.h>
struct bank{
    int ac;
    char name[100];
    float bal;
};
void info(struct bank);
void opt(struct bank,int,int);
int main()
{
    int n;
    printf("Enter the number of coustmer : ");
    scanf("%d",&n);
    struct bank cous[n];
    if(n>200)
        printf("Not possible");
    else
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter the account number : ");
            scanf("%ld",&cous[i].ac);
            printf("Enter the balance : ");
            scanf("%f",&cous[i].bal);
            printf("Enter the name : ");
            scanf("%s",cous[i].name);
        }
        for(int i=0;i<n;i++)
        {
            info(cous[i]);
        }
        int a,am;
    printf("Enter the account number : ");
    scanf("%ld",&a);
    printf("Enter the amount : ");
    scanf("%d",&am);
    for(int i=0;i<n;i++)
    {
        opt(cous[i],a,am);
    }
    }
    return 0;
}
void info(struct bank cous)
{
    if(cous.bal<100)
    {
        printf("%s %d\n",cous.name,cous.ac);
    }
}
void opt(struct bank cous,int a,int am)
{
    
    
    if(cous.ac == a)
    {
        int ch;
        printf("Enter 1(deposit) and 2(withdrawl)");
        scanf("%d",&ch);
        if(ch==1)
        {
            cous.bal=cous.bal+am;
            printf("New balance = %f",cous.bal);
        }
        if(ch==2)
        {
            cous.bal=cous.bal-am;
            if(cous.bal<100)
                printf("No withdrawl possible");
            else
                printf("New balance = %f",cous.bal);
        }
    }
}