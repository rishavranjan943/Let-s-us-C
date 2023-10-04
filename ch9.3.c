#include<stdio.h>
void fun(int);
int main()
{
    // CALLING FUNCTION
    int a=60;
    printf("%d",a);
    fun(a);
    return 0;
}
void fun(int b)
// CALLED FUNCTION
{
    b=30;
    printf("\n%d",b);

}