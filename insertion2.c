#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of arrary : ");
    scanf("%d",&size);
    int a1[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a1[i]);
    }
    int num,pos;
    printf("Enter the number u want to add : ");
    scanf("%d",&num);
    printf("Enter the position where u want to add the the entered number : ");
    scanf("%d",&pos);
    int a2[size+1];
    for(int i=size-1;i>=pos-1;i--)
    {
        a2[i+1]=a1[i];
    }
    a2[pos-1]=num;
    for(int i=0;i<pos-1;i++)
    {
        a2[i]=a1[i];
    }
    for(int i=0;i<size+1;i++)
    {
        printf("%d\t",a2[i]);
    }
    return 0;
}