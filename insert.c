#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of arrary : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int pos,x;
    printf("Enter position : ");
    scanf("%d",&pos);
    printf("Enter the number : ");
    scanf("%d",&x);
    
    for(int j=n-1;j>=pos-1;j--)
    {
        a[j+1]=a[j];
    }
    // a[n+1];
    a[pos-1]=x;
    for(int i=0;i<n+1;i++)
    printf("%d ",a[i]);
    return 0;
}