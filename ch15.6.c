#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]="Bamboo";
    int l1,l2;
    l1=strlen(arr);
    l2=strlen("Humpty");
    printf("String = %s Character = %d\n",arr,l1);
    printf("String = %s Character = %d","Humpty",l2);
    return 0;
}