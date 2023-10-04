#include<stdio.h>
int xstrlen(char *);
int main()
{
    char name[]="Bamboo";
    int l1,l2;
    l1=xstrlen(name);
    l2=xstrlen("Abcdef");
    printf("%d\n",l1);
    printf("%d",l2);
    return 0;
}
int xstrlen(char *a)
{
    int l=0;
    while(*a != '\0')
    {
        l++;
        a++;
    }
    return l;
}