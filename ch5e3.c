#include<stdio.h>
#include<math.h>
int main()
{
    int limit;
    printf("ENter the limit : ");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        int a=i;
        int c=0;
        while(a!=0)
        {
            c++;
            a=a/10;
        }
        int b=i;
        int s=0;
        while(b!=0)
        {
            int r=b%10;
            s=s+pow(r,c);
            b=b/10;
        }
        if(i==s)
        printf("%d\t",i);
    }
    return 0;
}