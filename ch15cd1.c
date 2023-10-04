#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter the string 💕💕 : ");
    fgets(s1,100,stdin);
    int j=strlen(s1);
    int i=0,num=0,f=1;
    for(i=0;i<j;i++)
    {
        if(s1[i]>=48 && s1[i]<=57)
        {
            num=10*num+(s1[i]-48);
            f=1;
        }
        else
        f=2;
        
    }
    if(f==1)
    printf("%d",num);
    else
    printf("Enter something valid.");
    return 0;
}
