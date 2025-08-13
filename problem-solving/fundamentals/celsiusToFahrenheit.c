#include <stdio.h>

int main()
{

    float temperature, result;

    printf("Enter temperature in Celsius = ");
    scanf("%f", &temperature);

    result = (temperature * 1.8) + 32;

    printf("Temperature in Fahrenheit = %.0f F", result);
}