//Write a program to accept a number and check if it is divisible by 5 and 7.
#include <stdio.h>
int main() {
    int number;
    // Input: Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check if the number is divisible by both 5 and 7
    if (number % 5 == 0 && number % 7 == 0) {
        printf("Number is divisible by 5 and 7.\n");
    } else {
        printf("Number is not divisible by 5 and 7.\n");
    }
    return 0;
}
