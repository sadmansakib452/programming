#include <stdio.h>

int main()
{

    float temperature, result;

    printf("Enter temperature in fahrenheit = ");
    scanf("%f", &temperature);

    result = (temperature - 32) * 1.8;

    printf("Temperature in celsius = %.0f C", result);
}