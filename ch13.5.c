// Acessing array by pointers 
#include<stdio.h>
int main()
{
    int num[]={24,34,55,67,89,50};
    int i,*j;
    j=&num[0];
    for(i=0;i<=5;i++)
    {
        printf("Address = %u   Element = %d\n",j,*j);
        j++;
        // j++ means j jumps to next memory location
    }
    printf("Different way of doing same thing\n");
    for(i=0;i<=5;i++)
    {
        j=&num[i];
        printf("Address = %u   Element = %d\n",j,*j);
    }
    return 0;
}