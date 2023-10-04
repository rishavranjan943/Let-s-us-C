#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the age of Ram : ");
    scanf("%d",&a1);
    printf("Enter the age of Shyam : ");
    scanf("%d",&a2);
    printf("Enter the age of Ajay : ");
    scanf("%d",&a3);
    if(a1<a2 && a1<a3)
    printf("Ram is youngest");
    else if(a2<a1 && a2<a3)
    printf("Shyam is youngest");
    else if(a3<a1 && a3<a2)
    printf("Ajay is youngest");
    else if(a1=a2 && a1<a3)
    printf("Ram and Shyam are youngest");
    else if(a1=a2 && a1>a3)
    printf("Ajay is youngest");
    else if(a2=a3 && a2<a1)
    printf("Shyam and Ajay are youngest");
    else if(a2=a3 && a2>a1)
    printf("Ram is youngest");
    else if(a3=a1 && a3<a2)
    printf("Ram and Ajay are youngest");
    else if(a3=a1 && a3>a2)
    printf("Shyam is youngest");
    else if(a1==a2 && a2==a3)
    printf("Ram,Shyam,Ajay are of same age.");
    return 0;
}