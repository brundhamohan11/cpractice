QUESTION:
Write a C program to display the ASCII value of vowels for both upper case and lower case letters. If the given character is not a vowel, display "Not a vowel" and If it is a vowel then display the "ASCII value of the vowel".




#include<stdio.h>
int main() {
    char ch;
    scanf(" %c", &ch);
    if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || 
        ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || 
        ch == 'U' || ch == 'u') {
        printf("ASCII of %c is %d\n", ch, (int)ch);
    } else {
        printf("Not a vowel\n");
    }

    return 0;
}
