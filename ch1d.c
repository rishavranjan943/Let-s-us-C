#include<stdio.h>
int main()
{
float f;
printf("Enter tempertaure (in F) :");
scanf("%f" , &f);
printf("Temperatue in F : %f" , f);
printf("Temperature in C : %f", 5*((f-32)/9));
return 0;
}