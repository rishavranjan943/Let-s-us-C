#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter the size of arrary : ");
    scanf("%d",&i);
    int arr[i];
    for(j=0;j<i;j++)
    {
        printf("Enter the %d element : ",j+1);
        scanf("%d",&arr[j]);
    }
    int k,p,a;
    printf("Enter the new element u want to add : ");
    scanf("%d",&k);
    printf("Enter the position where u want to add element : ");
    scanf("%d",&p);
    for(a=i-1;a>=p-1;a--)
    {
        arr[a+1]=arr[a];
        
    }
    i++;
    arr[p-1]=k;
    for(j=0;j<i;j++)
    {
        printf("%d\t",arr[j]);
    }
    
    return 0;
}