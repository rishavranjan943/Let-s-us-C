#include<stdio.h>
#include<math.h>
int arms(int,int);
int main()
{
    int n,i,j,k;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        j=i;
        k=i;
        while(j!=0)
        {
            j=j/10;
            c++;
        }
        if(i==arms(k,c))
            printf("%d\t",i);
    }
    return 0;
}
int arms(int x,int y)
{
    if(x==0)
        return 0;
    if(x>0)
        return pow(x%10,y) + arms(x/10,y);
}