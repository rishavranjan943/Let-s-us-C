#include<stdio.h>
#include<math.h>
float dis(float,float,float,float,float,float,float *,float *,float *);
float ar(float,float,float,float *);
float sar(float,float,float,float,float,float,float,float,float,float,float,float,float,float,float *);
int main()
{
    float x1,y1,x2,y2,x3,y3;
    // x1,y1 are coordinates of A.
    // x2,y2 are coordinates of B.
    // x3,y3 are coordinates of C.
    printf("Enter coordinates of A : ");
    scanf("%f %f",&x1,&y1);
    printf("Enter the coordinates of B : ");
    scanf("%f %f",&x2,&y2);
    printf("Enter the coordinates of c : ");
    scanf("%f %f",&x3,&y3);
    float a,b,c;
    // a,b,c are sides of triangle
    dis(x1,y1,x2,y2,x3,y3,&a,&b,&c);
    printf("Sides of triangle are : %0.2f\t%0.2f\t%0.2f\n",a,b,c);
    float a1;
    // a1 represents area of triangle ABC.
    ar(a,b,c,&a1);
    printf("\nArea of T(A,B,C) : %0.2f",a1);
    // TO CHECK WHETHER A POINT LIES INSIDE A TRIANGLE OR NOT WE CAN ar(ABC) = ar(APC)+ar(APB)+ar(BPC)
    float x4,y4;
    // x4,y4 are coordinates of P.
    printf("\nEnter the coordinates of point(P) : ");
    scanf("%f %f",&x4,&y4);
    float a2,a3,a4,h;
    // a2,a3,a4 are area of triangle of with vertex 2 of A,B,C and P.
    // h is value of function sar.
    h=sar(x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,a2,a3,a4,&a1);
    // 1 MEANS POINT LIES INSIDE TRIANGLE AND 0 LIES OUTSIDE TRIANNGLE
    printf("%0.0f",h);
    return 0;
}
float dis(float x1,float y1,float x2,float y2,float x3,float y3,float *A,float *B,float *C)
{
    *A=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    *B=sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
    *C=sqrt((pow(x1-x3,2))+(pow(y1-y3,2)));
}    
float ar(float a,float b,float c,float *A1)
{  
    if(a+b>c && b+c>a && c+a>b)
    {
        float p;
        // p is semiperimeter for T1.
        p=(a+b+c)/2;
        *A1=pow((p*(p-a)*(p-b)*(p-c)),0.5);
    }
}
float sar(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4,float a,float b,float c,float a2,float a3,float a4,float *A1)
{
    float d,e,f;
    // d,e,f are distance between vertex of triangle and point(P)
    d=sqrt((pow(x4-x1,2))+(pow(y4-y1,2)));
    e=sqrt((pow(x4-x2,2))+(pow(y4-y2,2)));
    f=sqrt((pow(x4-x3,2))+(pow(y4-y3,2)));
    float x,y,z;
    // x,y,z are semiperimeter for T2,T3,T4
    x=(a+d+e)/2;
    y=(c+e+f)/2;
    z=(b+d+f)/2;
    a2=sqrt(x*(x-a)*(x-d)*(x-e));
    a3=sqrt(y*(y-c)*(y-e)*(y-f));
    a4=sqrt(z*(z-b)*(z-d)*(z-f));
    float a5;
    // a5 is sum of area of T2,T3,T4
    a5=a2+a3+a4;
    if(*A1=a5)
    return 1;
    else
    return 0;
}