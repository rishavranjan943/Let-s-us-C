#include<stdio.h>
void modify(int *,int);
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    modify(&arr[0],10);
    printf("New elemwents : ");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
void modify(int *j,int n)
{
    for(int k=0;k<n;k++)
    {
        *j=3*(*j);
        j++;
    }
}