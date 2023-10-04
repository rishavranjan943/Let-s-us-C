#include<stdio.h>
void xstrcpy(char *,char *);
int main()
{
    char source[]="Abcdefgh";
    char target[25];
    xstrcpy(target,source);
    printf("Old = %s\n",source);
    printf("New = %s",target);
    return 0;
}
void xstrcpy(char *a,char *b)
{
    while(*b != 0)
    {
        *a=*b;
        b++;
        a++;
    }
    *a = '\0';
}