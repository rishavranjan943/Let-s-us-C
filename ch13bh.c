#include<stdio.h>
int main()
{
    int max,i,j,t;
    printf("Enter the size of arrary : ");
    scanf("%d",&max);
    int a[max];  
    for(i=0;i<max;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<max;i++)
    {
        for(j=0;j<max-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
        }
    }
    printf("New arrary : ");
    for(i=0;i<max;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}