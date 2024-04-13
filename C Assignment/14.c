//Write a C program to accept a character and invert the case of it
#include <stdio.h>
int main() {
    char ch;
    // Input: Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Invert the case without using toupper()
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
        return 1; // Exit the program
    }
    // Output: Display the inverted case character
    printf("Inverted case: %c\n", ch);

    return 0;
}
/* Using toupper function
#include <stdio.h>

int main() {
    char ch;

    // Input: Ask the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Invert the case without using toupper()
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    } else if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
    } else {
        printf("Invalid input. Please enter an alphabet.\n");
        return 1; // Exit the program
    }

    // Output: Display the inverted case character
    printf("Inverted case: %c\n", ch);

    return 0;
}


*/