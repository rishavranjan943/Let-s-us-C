// SMALLEST NUMBER IN 25 ARRARY USING POINTERS.
#include<stdio.h>
int main()
{
    int arr[5],i,*k,t;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    k=&arr[0];
    for(i=1;i<5;i++)
    {
        
        if(*k>arr[i])
        k=&arr[i];
    }
    printf("%d",*k);
    return 0;
}