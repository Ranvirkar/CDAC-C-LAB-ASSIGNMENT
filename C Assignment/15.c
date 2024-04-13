//Write a program to accept 3 numbers and compute minimum and maximum from them
#include <stdio.h>
int main() {
    int num1, num2, num3, min, max;
    // Input: Ask the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // Find the minimum and maximum
    min = (num1 < num2) ? num1 : num2;
    min = (min < num3) ? min : num3;
    max = (num1 > num2) ? num1 : num2;
    max = (max > num3) ? max : num3;
    // Output: Display the minimum and maximum
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    return 0;
}
