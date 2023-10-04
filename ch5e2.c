// TO PRINT ARMSTRONG NUMBER TILL ENTERED LIMIT
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,t=0,s=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=i;
        int b=i;
        while(a!=0)
        {
            c++;
            a=a/10;
        }
        while(b!=0)
        {
            t=b%10;
            s=s+(pow(t,c));
            b=b/10;
        }
        if(s==i)
        printf("%d\t",i);
        s=0;
        c=0;t=0;
    }
    return 0;
}