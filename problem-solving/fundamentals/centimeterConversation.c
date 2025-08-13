#include <stdio.h>

int main()
{

    float length;

    printf("Enter length in centimeter = ");
    scanf("%f", &length);

    printf("Length in meter = %.0f m\n", (length / 100));
    printf("Length in kilometer = %.2f km\n", (length / 100) / 1000);
}