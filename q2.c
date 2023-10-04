#include<stdio.h>
int impr(int,int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int c=impr(n,n-1);
    printf("%d",c);
    return 0;
}
int impr(int a ,int b)
{
    int s=0,k=2;
    if(b==1)
    return 0;
        if(a%b==0)
        {
        return b+impr(a,b-1);
        }
        else{
        return impr(a,b-1);
    }
}