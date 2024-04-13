//Write a C program to input angles of a triangle and check whether triangle is valid or not

#include <stdio.h>
int main() {
    float angle1, angle2, angle3;
    // Input: Ask the user to enter the three angles
    printf("Enter the three angles of the triangle (in degrees):\n");
    scanf("%f %f %f", &angle1, &angle2, &angle3);
    // Check if the sum of angles is 180 degrees
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is invalid.\n");
    }
    return 0;
}
