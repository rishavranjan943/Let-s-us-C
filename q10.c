#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k,r;
    printf("Enter limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       int c=0;
       int s=0;
        j=i;
        k=i;
        while(j!=0)
        {
            j=j/10;
            c++;
        }
        while(k!=0)
        {
            r=k%10;
            s=s+(pow(r,c));
            k=k/10;
        }
        if(s==i)
        printf("%d\n",s);
        c=0;
        s=0;
    }
    return 0;
}