#include<stdio.h>
#include<string.h>
int main()
{
    char credit[16];
    printf("Enter the credit card number : ");
    gets(credit);
    int i,sum1=0,sum2=0,sum,j;
    j=strlen(credit);
    for(i=0;i<j;i=i+2)
    {
        if(credit[i]>=48 && credit[i]<=57)
        credit[i]=2*(credit[i]-48);
        if(credit[i]>=10)
        credit[i]=credit[i]-9;
        sum1=sum1+credit[i];
    }
    
    printf("%d\n",sum1);
    for(i=1;i<=j;i=i+2)
    {
        credit[i]=credit[i]-48;
        if(credit[i]>=48 || credit[i]<=57)
        sum2=sum2+credit[i];
    }
    printf("%d\n",sum2);
    sum=sum1+sum2;
    printf("%d\n",sum);
    if(sum%10==0)
    printf("Valid\n");
    else
    printf("Not valid\n");
    return 0;
}