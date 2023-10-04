#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="Abcdefgh";
    char target[]="Ijklmnop";
    strcat(target,source);
    printf("Old = %s\n",source);
    printf("New = %s",target);
    return 0;
}