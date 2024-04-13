#include <stdio.h>
int main() {
    char c;

    // Input: Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Output: Print the ASCII value of the character
    printf("ASCII value of %c = %d\n", c, c);

    return 0;
}
