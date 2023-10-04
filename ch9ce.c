#include<stdio.h>
#include<math.h>
void area(float,float,float);
int main()
{
    float a,b,c;
    printf("Enter 3 sides : ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    area(a,b,c);
    else
    printf("No Triangle");
    return 0;
}
void area(float a,float b,float c)
{
    float s=(a+b+c)/2;
    float t;
    t= s*(s-a)*(s-b)*(s-c);
    float ar;
    ar=pow(t,0.5);
    printf("%f",ar);
}