#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=23;i++)
    {
        if(i>=1 && i<=11)
        printf("%d AM\n",i);
        else if(i==12)
        printf("%d Noon\n",i);
        else if(i>=13 && i<=23)
        printf("%d PM\n",i-12);
        else if(i==0)
        printf("%d Midnight\n",i);
    }
    return 0;
}