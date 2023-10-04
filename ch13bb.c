// COPY COMTENTS OF ARRARY TO ANTHOER
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,i;
    printf("Enter size of arrary you want : ");
    scanf("%d",&max);
    int arr[max],arr2[max];
    printf("Enter the number of arrary : ");
    for(i=0;i<max;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<max;i++)
    {
        arr2[i]=arr[max-1-i];
    }
    for(int i=0;i<max;i++)
    {
        printf("%d\t",arr2[i]);
    }
    return 0;
}