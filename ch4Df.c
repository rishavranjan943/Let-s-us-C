#include<stdio.h>
int main()
{
    float h,c,t;
    // h - HARDNESS
    // c -CARBON CONTENT 
    // t - TENSILE STRENGTH
    printf("Enter Hardness:");
    scanf("%f" ,&h);
    printf("Enter Carbon Content:");
    scanf("%f" , &c);
    printf("Enter Tensile strength:");
    scanf("%f" , &t);
    if(h>50 && c<0.7 && t>5600)
    printf("Grade 10");
    else if(h>50 && c<0.7)
    printf("Grade 9");
    else if(c<0.7 && t>5600)
    printf("Grade 8");
    else if(h>50 && t>5600)
    printf("Grade 7");
    else if (h>50 || c<0.7 || t>5600)
    printf("Grade 6");
    else
    printf("Grade 5");
    return 0;
}