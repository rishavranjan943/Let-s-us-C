#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    printf("Enter lattitudes: ");
    scanf("%f%f" , &l1,&l2);
    printf("Enter longitudial: ");
    scanf("%f%f" , &g1, &g2);
    float d,e,f;
    d = (sin(l1)*sin(l2))+(cos(l1)*cos(l2))*cos(g2-g1);
    e = acos(d);
    f = 3963*e;
    printf("Distance in nautical miles is %f.",f);
    return 0;
}   