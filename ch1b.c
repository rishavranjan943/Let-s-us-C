#include<stdio.h>

int main()
{
    float s,m,f,i,c;
    printf("Enter distance between two cities(in km) : ");
    scanf("%f", &s);
    printf("Distance in km is %f\n" , s);
    m = s*1000;
    printf("Distance in meter is %f\n", m);
    c = m *100;
    printf("Distance in cm is %f\n" , c);
    f = c/30;
    printf("Distance in feet is %f\n" ,  f);
    i = 12*f;
    printf("Distance in inches is %f\n" , i);
}