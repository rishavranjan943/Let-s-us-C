// Address operations 
#include<stdio.h>
int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='A',*z;
    printf("Value of i = %d\n",i);
    printf("Value of j = %f\n",j);
    printf("Value of k = %c\n",k);
    x=&i;y=&j;z=&k;
    printf("Addresss of i = %u\n",x);
    printf("Addresss of j = %u\n",y);
    printf("Addresss of k = %u\n",z);
    x++;y++;z++;
    printf("Addresss of i = %u\n",x);
    printf("Addresss of j = %u\n",y);
    printf("Addresss of k = %u\n",z);
    // integer = 4 byte
    // float = 4 byte
    // char = 1 byte
    return 0;
}