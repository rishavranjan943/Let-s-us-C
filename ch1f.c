#include<stdio.h>
int main()
{
    int a= 1189;
    int b= 841;
    printf("Dimensions of A0 : %d * %d\n" , a,b);
    printf("Dimensions of A1 : %d * %d\n" , b,a/2);
    printf("Dimensions of A2 : %d * %d\n" , a/2,b/2);
    printf("Dimensions of A3 : %d * %d\n" , b/2,a/4);
    printf("Dimensions of A4 : %d * %d\n" , a/4,b/4);
    printf("Dimensions of A5 : %d * %d\n" ,b/4,a/8);
    printf("Dimensions of A6 : %d * %d\n", a/8,b/8);
    printf("Dimmension of A7 : %d * %d\n" , b/8,a/16);
    printf("Dimension of A8 : %d * %d\n" ,a/16,b/16);
    return 0;
}