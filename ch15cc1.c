#include<stdio.h>
void sttt(char arr[],int,int);
int main()
{
    char string[100];
    int p1,p2;
    printf("Enter the string : ");
    fgets(string,100,stdin);
    printf("Enter the position 1 : ");
    scanf("%d",&p1);
    printf("Enter the position 2 : ");
    scanf("%d",&p2);
    sttt(string,p1,p2);
    return 0;
}
void sttt(char arr[],int a,int b)
{
    char string2[100];
    int i,j;
    for(i=a,j=0;i<=b;i++,j++)
    {
        string2[j]=arr[i];
    }
    puts(string2);
}