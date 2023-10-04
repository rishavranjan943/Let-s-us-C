#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of arrary : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        if(arr[i] == arr[n-1-i] && (i != n-1-i))
        printf("arr[%d] = arr[%d-1-%d]\n",i,n,i);
    }
    return 0;
}