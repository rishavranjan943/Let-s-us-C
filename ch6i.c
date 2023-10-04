#include<stdio.h>
int main()
{
    float p=100000;
    float r=10;
    float in,t;
    printf("Population at end of 1 year = %f\n",p);
    for(int t=2;t<=10;t++)
    {
         in=(p*10)/100;
         p=p+in;
         printf("Population at end of %d year = %f\n",t,p);
    }
    return 0;
}