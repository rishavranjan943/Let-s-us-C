#include<stdio.h>
int main()
{
    char c;
    printf("Enter character:");
    scanf("%c" , &c);
    (c>=65 && c<=90)?printf("Upper Case"):(c>=97 && c<=122)?printf("Lower Case"):
    (c>=48 && c<=57)?printf("Digit"):(c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)
    ?printf("Special character"):0;
    // 0 is written as in ternary else is necessary.
    return 0;   
}