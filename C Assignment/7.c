/* Aim: Accept temperature in Fahrenheit (F) and print it in Celsius (C) and Kelvin (K) */
#include <stdio.h>
int main() {
    float far, c, k;
    printf("\nEnter Fahrenheit Temperature: ");
    scanf("%f", &far);
    c = 5 * (far - 32) / 9;
    k = c + 273.15;
    printf("\nThe Temperature in Celsius is %.2f°C", c);
    printf("\nThe Temperature in Kelvin is %.2f K\n\n", k);
    return 0;
}
