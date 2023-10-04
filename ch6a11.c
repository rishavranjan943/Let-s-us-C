#include<stdio.h>
int main()
{
    int li,f;
    printf("Enter the limit : ");
    scanf("%d",&li);
    for(int i=2;i<=li;i++)
    {
        f=0;
        for(int a=2;a<i;a++)
        {
            if(i%a==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        printf("%d\t",i);
    }
    return 0;
}