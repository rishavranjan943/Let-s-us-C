#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    printf("Enter marks of 5 subject : ");
    scanf("%f%f%f%f%f" , &m1,&m2,&m3,&m4,&m5);    
    if(m1<=100 && m2<=100 && m3<=100 && m4<=100 && m5<=100)
    {
    printf("Total marks = %f\n" , m1+m2+m3+m4+m5);
    printf("Percentage = %f" , (((m1+m2+m3+m4+m5)/500)*100));
    }
    else
    printf("Enter correct marks");
    return 0;
}