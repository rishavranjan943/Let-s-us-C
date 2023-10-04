#include<stdio.h>
int main()
{
    char name[25];
    printf("Enter the name : ");
    scanf("%[^\n]s",name);
    printf("Hello!\n");
    puts(name);
    return 0;
}