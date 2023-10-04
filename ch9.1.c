#include<stdio.h>
void i();
void j();
void k();
int main()
{
    printf("Hello");
    i();
    j();
    k();
    return 0;
}
void i()
{
    printf("\nI");
}
void j()
{
    printf("\nJ");
}
void k()
{
    printf("\nK");
}