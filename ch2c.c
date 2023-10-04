#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3;
    printf("Enter sides of triangle :");
    scanf("%f%f%f" , &s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s3+s1>s2)
    {
    float s = (s1+s2+s3)/2;
    float ar = s*(s-s1)*(s-s2)*(s-s3);
    float area = pow(ar,0.5);
    printf("Area is : %f" , area);
    }
    else
    printf("No Triangle");
    return 0;
}