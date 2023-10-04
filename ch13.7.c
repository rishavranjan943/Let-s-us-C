// Accessing array in different ways : 
#include<stdio.h>
int main()
{
    int num[]={24,56,78,34,89,90};
    for(int i=0;i<=5;i++)
    {
        printf("Adresss = %u %u %u\t",&num[i],(num+i),(i+num));
        printf("Element = %d %d %d\n",num[i],*(num+i),*(i+num));
    }
    return 0;
}