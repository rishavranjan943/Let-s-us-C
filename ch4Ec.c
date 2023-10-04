#include<stdio.h>
int main()
{
 float a,b,c;
 printf("Enter a,b,c:");
 scanf("%f%f%f" ,&a,&b,&c);
 (a>b && b>c)?printf("%f is greatest.",a):(b>c && c>a)?printf("%f is greatest.",b):(c>a && a>b)?printf("%f is greatest.",c):
 (a=b && a>c)?printf("%f and %f are greatest.",a,c):(a==b && a<c)?printf("%f is greaatest.",c):(b==c && b>a)?printf("%f and %f are greatest.",b,c):
 (b==c && b<a)?printf("%f is greatest.",a):(c==a && a<b)?printf("%f is greatest.",b):(c==a && c>b)?printf("%f and %f are greatest.",c,a):
 (a==b && b==c)?printf("All numbers are same."):0;
 return 0;
}