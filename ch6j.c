#include<stdio.h>
#include<math.h>
int main()
// RAMANUJAN NUMBER - A^3 = B^3+C^3 OR VICE VERSA.
{
    int l;
    printf("Enter limit : ");
    scanf("%d",&l);
    int i,j,k;
    for(i=1;i<=l;i++)
    {
        for(j=1;j<=l;j++)
        {
            for(k=1;k<=l;k++)
            {
                 if(i==pow(j,3)+pow(k,3) || j==pow(k,3)+pow(i,3) || k==pow(i,3)+pow(j,3))
                
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}