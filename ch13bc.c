// 25 NUMBERS ARE ENTERED IN ARRARY.A NUMBER IS ENTERED THROUGH KEYBOARD CHECK WHETHER ENTERED NUMBER IS IN ARRARY OR NOT.IF YES THEN HOW MANY TIMES
#include<stdio.h>
int main()
{
    int arr[25],i,n,c=0;
    printf("Enter the numbers of arrary : ");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d",&n);
    for(i=0;i<25;i++)
    {
        if(n==arr[i])
        c++;
    }
    if(c>0)
    printf("Yes the number entered by user is present in arrary.\n");
    printf("The number is present %d times in arrary",c);
    return 0;
}