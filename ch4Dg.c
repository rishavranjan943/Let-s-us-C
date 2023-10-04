#include<stdio.h>
int main()
{
    float h,m;
    // h -HEIGHT (IN  METER)
    // m -MASS (IN KG)
    printf("Enter height(in m):");
    scanf("%f" , &h);
    printf("Enter mass(in kg) :");
    scanf("%f" , &m);
    float bmi = m/(h*h);
    printf("%f\n" , bmi);
    if(bmi<15)
    printf("Starvation");
    else if(bmi>15.1 && bmi<17.5)
    printf("Anorexic");
    else if(bmi>17.6 && bmi<18.5)
    printf("Underweight");
    else if(bmi>18.6 && bmi<24.9)
    printf("Ideal");
    else if("bmi>25 && bmi<25.9")
    printf("Overweight");
    else if(bmi>30 && bmi<30.9)
    printf("Obese");
    else
    printf("Morbidly Obese");
    return 0;
}