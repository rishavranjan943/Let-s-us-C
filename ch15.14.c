#include<stdio.h>
int count(char arr[]);
int main()
{
    char name[100];
    printf("Enter the name : ");
    fgets(name,100,stdin);
    printf("%d",count(name));
    return 0;
}
int count(char arr[])
{
    int i=0,c=0;
    while(arr[i] != '\0')
    {
        c++;
        i++;
    }
    return c-1;
}