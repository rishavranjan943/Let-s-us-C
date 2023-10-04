#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    int p1,p2;
    printf("Enter the position between which u want the letters : ");
    scanf("%d %d",&p1,&p2);
    char str1[100];
    int j=0,i;
    for(i=p1,j=0;i<=p2;i++,j++)
    {
        str1[j]=str[i];
    }
    puts(str1);
    return 0;
}