#include <stdio.h>
int main() {
    float basic, da, hra, ta, others;
    float pf, it;
    float net_salary;
    // Input: Ask the user to enter the basic salary and other allowances
    printf("Enter Basic Salary (INR): ");
    scanf("%f", &basic);
    printf("Enter HRA (INR): ");
    scanf("%f", &hra);
    printf("Enter TA (INR): ");
    scanf("%f", &ta);
    printf("Enter others (INR): ");
    scanf("%f", &others);
    // Calculate DA, PF, and IT
    da = (basic * 8) / 100;
    pf = (basic * 2) / 100;
    it = (basic * 3) / 100;
    // Calculate net salary
    net_salary = basic + da + hra + ta + others - (pf + it);
    // Output: Display the net salary
    printf("Net Salary is: INR %.02f\n", net_salary);
    return 0;
}
