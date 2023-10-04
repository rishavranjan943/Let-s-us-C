#include<stdio.h>
int main()
{
    int num,max=300,i,flag;
    for(num=1;num<=max;num++)
    {
        flag=0;
        {
            for(i=2;i<=num-1;i++)
            {
                if(num%i==0)
                {
                    flag=1;
                    break;
                }
            }
            
            
            if(flag==0 && num!=1)
            printf("%d\t",num);
        }
    }
    return 0;
}