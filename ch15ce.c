#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100]="a";
    char str2[100]="b";
    int n,i;
    printf("Enter the number of terms you want in series : ");
    scanf("%d",&n);
    printf("f(0) = %s\n",str1);
    printf("f(1) = %s\n",str2);
    for(i=2;i<=n;i++)
    {
        strcpy(str,str2);
        strcat(str,str1);
        printf("f(%d) = %s\n",i,str);
        strcpy(str1,str2);
        strcpy(str2,str);
    }
    return 0;
}