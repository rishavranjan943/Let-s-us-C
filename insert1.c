#include<stdio.h>
int ptr(int *a,int b,int c,int d)
{
     for(int j=b-1;j>=c-1;j--)
    {
        *(a+j+1)=*(a+j);
    }
    // a[n+1];
    *(a+c-1)=d;
    // for(int i=0;i<b+1;i++)
    // printf("%d ",*(a+i));
    return *a;
}
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
    ptr(a,n,pos,x);
    // for(int j=n-1;j>=pos-1;j--)
    // {
    //     a[j+1]=a[j];
    // }
    // // a[n+1];
    // a[pos-1]=x;
    // for(int i=0;i<n+1;i++)
    // printf("%d ",a[i]);
    for(int i=0;i<n+1;i++)
    printf("%d ",*(a+i));
    return 0;
}