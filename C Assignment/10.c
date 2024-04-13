/*Write a program, which accepts annual basic salary of an employee and calculates and displays the Income tax as per the following rules.
Basic: < 1, 50,000 Tax = 0
1, 50,000 to 3,00,000 Tax = 20%
> 3,00,000 Tax = 30*/
#include <stdio.h>
int main() {
    float salary, tax = 0;
    // Input: Ask the user to enter the basic salary
    printf("Enter the annual basic salary: ");
    scanf("%f", &salary);
    // Calculate income tax based on salary
    if (salary >= 300000) {
        tax = salary * 30 / 100;
    } else if (salary >= 150000) {
        tax = salary * 20 / 100;
    }
    // Output: Display the calculated income tax
    printf("Income tax calculated: %.2f\n", tax);
    return 0;
}
