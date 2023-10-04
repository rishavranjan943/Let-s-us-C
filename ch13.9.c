#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max,i,*p;
    printf("Enter the array size : ");
    scanf("%d",&max);
    p=(int *)malloc(max * sizeof(int));
    for(i=0;i<=max-1;i++)
    {
        p[i]=i*i;
        printf("%d\n",p[i]);
    }
    return 0;
}