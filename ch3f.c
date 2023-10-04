#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter age of Ram,Shyam,Ajay :");
    scanf("%d%d%d" , &a,&b,&c);
    if(a<b && b<c)
    printf("Ram is youngest.");
    else 
    {
        if(b<a && a<c)
        printf("Shyam is youngest.");
        else
        printf("Ajay is youngest.");
    }
    return 0;
}