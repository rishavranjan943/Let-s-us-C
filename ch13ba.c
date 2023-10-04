#include<stdio.h>
int main()
{
    int max,a[max],i,j;
    printf("Enter the size of arrary : ");
    scanf("%d",&max);
    for(i=0;i<max;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<max;i++)
    {
        for(j=max-1;j>i;j--)
        {
            if(a[i]%2!=0 && a[j]%2==0)
            {
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }
    for(i=0;i<max;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}