#include <stdio.h>
int main() {
    int radius;
    float PI = 3.14, area, circumference;
    // Input: Ask the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    // Output: Print the results
    printf("The Area of the circle is: %.6f\n", area);
    printf("The Circumference of the circle is: %.6f\n", circumference);
    return 0;
}
