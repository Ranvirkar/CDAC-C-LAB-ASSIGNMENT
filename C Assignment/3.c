#include <stdio.h>

int main() {
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    float total, average, percentage;
    char grade;

    // Input: Ask the user to enter the marks of five subjects
    printf("Enter the marks of five subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);

    // Calculate total, average, and percentage
    total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    // Determine the grade based on the average
    if (average >= 90)
        grade = 'A';
    else if (average >= 80 && average < 90)
        grade = 'B';
    else if (average >= 70 && average < 80)
        grade = 'C';
    else if (average >= 60 && average < 70)
        grade = 'D';
    else
        grade = 'E';

    // Output: Display the results
    printf("\nThe Total marks are: %.2f / 500.00\n", total);
    printf("The Average marks are: %.2f\n", average);
    printf("The Percentage is: %.2f%%\n", percentage);
    printf("The Grade is: '%c'\n", grade);

    return 0;
}
