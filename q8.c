#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    int age;
    FILE *fptr;
    // fptr=fopen("info.txt","w");
    // {
    //     printf("Enter the name : ");
    //     scanf("%s",c);
    //     printf("Enter the age : ");
    //     scanf("%d",&age);
    //     fprintf(fptr,"%s\t%d",c,age);
    // }
    // fclose(fptr);
    // fptr=fopen("info.txt","r");
    // {
    //     fscanf(fptr,"%s\t",&c);
    //     fscanf(fptr,"%d",&age);
    //     printf("Name %s\n",c);
    //     printf("value %d",age);
    // }
    // fclose(fptr);
    fptr=fopen("info.txt","a");
    {
         printf("Enter the name : ");
        scanf("%s",c);
        printf("Enter the age : ");
        scanf("%d",&age);
        fprintf(fptr,"%s\t%d",c,age);
        
    }
    fclose(fptr);
        return 0;
}