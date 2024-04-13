//Accept a lowercase character from the user and check whether the character is a vowel or consonant. (Hint: a, e, i, o, u are vowels)
#include <stdio.h>
int main() {
    char c;
    // Input: Ask the user to enter a lowercase character
    printf("Enter a lowercase character: ");
    scanf("%c", &c);
    // Check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("%c is a vowel.\n", c);
    } else {
        printf("%c is a consonant.\n", c);
    }
    return 0;
}
