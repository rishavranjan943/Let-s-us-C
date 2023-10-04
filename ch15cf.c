#include<stdio.h>
int main()
{
    char ibsn[11];
    printf("Enter IBSN number : ");
    fgets(ibsn,11,stdin);
    int i,j,num=0;
    
    for(i=0,j=1;i<10;i++,j++)
        {
            ibsn[i]=ibsn[i]-48;
            
            num=num+j*ibsn[i];
        }
        int k=num%11;
    if(k==0)
    printf("It is ibsn number.");
    else
    printf("Not correct");
    return 0;
}