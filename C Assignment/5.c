/* Using temp
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input: Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Output: Display the swapped values
    printf("After swapping (using third variable):\n");
    printf("Number 1: %d\nNumber 2: %d\n", num1, num2);

    return 0;
}*/
#include <stdio.h>

int main() {
    int num1, num2;

    // Input: Ask the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Swap without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Output: Display the swapped values
    printf("After swapping (without using third variable):\n");
    printf("Number 1: %d\nNumber 2: %d\n", num1, num2);

    return 0;
}

