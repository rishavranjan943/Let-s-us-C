#include<stdio.h>
#include<math.h>
int arm(int,int);
int main()
{
    int c,i,n,j,r;
    printf("Enter the limit : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=i;
        c=0;
        while(j !=0)
        {
            c++;
            j=j/10;
        }
        int r=arm(i,c);
        if(r==i)
            printf("%d\t",r);
        i++;
    }
    return 0;
}
    int arm(int x,int y)
    {
        int di,s=0;
        while(x!=0)
        {
           di=x%10;
           s=s+pow(di,y);
           x=x/10; 
        }
        return s;
    }
