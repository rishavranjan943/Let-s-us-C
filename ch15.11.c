#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Abc";
    char string2[]="Def";
    int l1,l2,l3,l4;
    l1 = strcmp(string1,"Abc");
    l2=strcmp(string2,string1);
    l3=strcmp(string1,string2);
    l4=strcmp("Abcdef",string1);
    printf("%d  %d  %d  %d",l1,l2,l3,l4);
    return 0;
}