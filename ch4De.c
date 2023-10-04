#include<stdio.h>
int main()
{
    float r,g,b,red,green,blue;
    printf("Enter value of r(0 to 225):");
    scanf("%f" , &r);
    if(r>225 || r<0)
    printf("Invalid");
    printf("Enter value of g(0 to 225):");
    scanf("%f" , &g);
    if(g>225 || g<0)
    printf("Invalid");
    printf("Enter value of b(0 to 225):");
    scanf("%f" , &b);
    if(b>225 || b<0)
    printf("Invalid");
    red = r/225;
    green = g/225;
    blue = b/225;
//    FIND MAXIMUM AMONG ALL:
    float max=red;
    if(max<green)
    max=green;
    if(max<blue)
    max=blue;
// w stands for white:
   float white=max;
   printf("White : %f\n" ,white);
   float cyan = (white-red)/white;
   printf("Cyan = %f\n" , cyan);
   float magneta = (white-green)/white;
   printf("magenta = %f\n" , magneta);
   float yellow = (white-blue)/white;
   printf("Yellow = %f\n" , yellow);
   float black=1-white;
   printf("Black = %f\n" , black);
   return 0;
}