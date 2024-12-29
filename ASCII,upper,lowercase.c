QUESTION:
Write a C program to find whether a given character is an uppercase, lowercase, number or symbol.

If it is an alphabet find whether it is an Uppercase or Lowercase.
If it is a number display Number else display Symbol.
 




#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    printf("Upper");
    else if(ch>='a'&&ch<='z')
    printf("Lower");
    else if(ch>='0'&&ch<='9')
    printf("Number");
    else
    printf("Symbol");
    return 0;
}
