#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str,100,stdin);
    // int j=strlen(str);
    int i,num=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>= 48 && str[i]<=57)
        {
            num = (num*10) + (str[i]-48);
        }
        else
        break;
    }
    printf("%d",num);
    return 0;
    
}