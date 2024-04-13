//Write a C program to check whether a entered character is uppercase or lowercase alphabet
#include <stdio.h>
int main() {
    char ch;
    // Input: Ask the user to enter a character
    printf("Enter any character: ");
    scanf("%c", &ch);
    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase alphabet.\n", ch);
    } else {
        printf("'%c' is not an alphabet.\n", ch);
    }
    return 0;
}
