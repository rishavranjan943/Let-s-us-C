#include<stdio.h>
void print(char arr[]);
int main()
{
    char name[]="Abc def";
    char last[]="Ghi jkl";
    print(name);
    print(last);
    return 0;
}
void print(char arr[])
{
    for(int i=0;arr[i]!=0;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}