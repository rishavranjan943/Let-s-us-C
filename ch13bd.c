// 25 NUMBERS ARE ENTERED THROUGH KEYBOARD.CHECK HOW MANY ARE POSITIVE OR NEGATIVE AND HOW MANY ARE ODD OR EVEN.
#include<stdio.h>
int main()
{
    int arr[25],i,c1=0,c2=0,c3=0,c4=0,c5=0;
    printf("Enter the number of arrary : ");
    for(i=0;i<25;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<25;i++)
    {
        if(arr[i]>0)
        c1++;
        else if(arr[i]<0)
        c2++;
        else
        c3++;
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]%2==0)
            c4++;
            else
            c5++;
        }    
    }
    printf("Number of positive number = %d\n",c1);
    printf("Number of negative number = %d\n",c2);
    printf("Number of zero = %d\n",c3);
    printf("Number of even = %d\n",c4);
    printf("Number of odd = %d\n",c5);
    return 0;
}