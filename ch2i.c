#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d" , &n);
    int a = n/100;
    int b = n %100;
    int c = b/50;
    int d = b%50;
    int e = d/10;
    int f = d%10;
    int g = f/5;
    int h = f%5;
    int i = h/2;
    int j = h%2;
    int k = j/1;
    int l = j%1;
    printf("The minimum number of notes are : %d" , a+c+e+g+i+k);
    return 0;   
}