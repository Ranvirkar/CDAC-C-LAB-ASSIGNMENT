#include <stdio.h>
int main() {
    int num;
    // Input: Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Check if the number is perfectly divisible by 2
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}
