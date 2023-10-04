#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    printf("UPPER CASE");
    else if(c>=90 && c<=122)
    printf("LOWER CASE");
    else if((c>=0 && c<=47) || (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=127))
    printf("SPECIAL CHARACTER");
    else if(c>=48 && c<=57)
    printf("DIGIT");
    return 0;
}