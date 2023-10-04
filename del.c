#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of arrary : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int pos;
    printf("Enter position : ");
    scanf("%d",&pos);
    for(int j=pos-1;j<n;j++)
    {
        a[j]=a[j+1];
    }
    // a[n-1];
    
    for(int i=0;i<n-1;i++)
    printf("%d ",a[i]);
    return 0;
}