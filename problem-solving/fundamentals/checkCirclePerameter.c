#include <stdio.h>

int main()
{

    float radious;
    float PI = 3.1416;

    printf("Enter radious: ");
    scanf("%f", &radious);

    printf("Diameter = %.0f\n", (2 * radious));
    printf("Circumference = %.2f\n", (2 * PI * radious));
    printf("Area = %.2f sq. units \n", (PI * radious * radious));
}