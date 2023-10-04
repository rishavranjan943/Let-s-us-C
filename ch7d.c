#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter the class : ");
    scanf("%d",&c);
    if(c>=1 && c<=3)
    {
        switch(c)
        {
            case 1 : printf("Number of failed subject : ");
                     scanf("%d",&f);
                     if(f>3)
                     printf("No grace marks to be awarded.");
                     else
                     printf("5 grace marks per subject.");
                     break;
            case 2 : printf("Number of failed subject : ");
                     scanf("%d",&f);
                     if(f>2)
                     printf("No grace marks to be awarded.");
                     else
                     printf("4 grace marks per subject.");
                     break;
            case 3 : printf("Number of failed subject : ");
                     scanf("%d",&f);
                     if(f>1)
                     printf("No grace marks to be awarded.");
                     else
                     printf("5 grace marks per subject.");
                     break;
        }
    }
    else
    printf("Enter correct class.");
    return 0;
}