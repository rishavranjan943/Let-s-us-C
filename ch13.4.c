// Array and pointer operations
#include<stdio.h>
int main()
{
    int arr[]={56,67,89,52,44,98,29};
    int i=4,*j,*k,*x,*y;
    j=&i;
    printf("Address of i = %u\n",j);
    j=j+9;
    // Plus 9 means move 9 memory location forward.
    // In address value intial + (9*4)
    printf("Operation of j = %u\n",j);
    k=&i;
    printf("Address of i = %u\n",k);
    k=k-3;
    // Minus 3 means 3 memory location back.
    // In address value intial - (3*4)
    printf("Operation on k = %u\n",k);
    x=&arr[2];
    y=&arr[4];
    printf("Address of arr[2] = %u\n",x);
    printf("Address of arr[4] = %u\n",y);
    printf("Opeartion of x and y = %u\n",y-x);
    // Difference of 2 address gives number of memory location between them and it donot gives the number between them
    j=&arr[4];
    k=(arr+4);
    // a[i] = *(a+i)
    // &a[i] = &*(a+i)
    //       = (a+i)
    // &arr[4] = (arr+4)
    if(j==k)
    printf("Same location");
    else
    printf("Different location");
    return 0;
}