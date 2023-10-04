#include<stdio.h>
int main()
{
    int r,c,i,j,l=0;
    printf("Enter no. of rows and columns : ");
    scanf("%d %d",&r,&c);
    int mat[r][c],tra[r][c];
    if(r!=c)
    printf("Enter correct dimmensions to get square matrix.");
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the element of mat[%d][%d] : ",i,j);
                scanf("%d",&mat[i][j]);
            }
        }
        printf("The orignal matrix : \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",mat[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                tra[j][i]=mat[i][j];
            }
        }
        printf("The transpose of matrix : \n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                printf("%d\t",tra[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(mat[i][j]==tra[i][j])
                l++;
            }
        }
        if(l==(r*c))
        printf("Symmetric");
        else
        printf("Not symmetric");
        return 0;
    }
    return 0;
}