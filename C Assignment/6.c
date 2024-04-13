#include <stdio.h>
int main() {
    float radius, height;
    const float pi = 3.14;
    float surface_area, volume;
    // Input: Ask the user to enter the radius and height of the cylinder
    printf("Enter the radius (r) of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height (h) of the cylinder: ");
    scanf("%f", &height);
    // Calculate surface area and volume
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;
    // Output: Display the results
    printf("Surface area of the cylinder is: %.2f square units\n", surface_area);
    printf("Volume of the cylinder is: %.2f cubic units\n", volume);
    return 0;
}
