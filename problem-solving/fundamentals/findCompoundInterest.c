#include <stdio.h>
#include <math.h>

int main()
{

    int principle, times;
    float rate, interest;

    printf("Enter principle (amount): ");
    scanf("%d", &principle);

    printf("Enter times: ");
    scanf("%d", &times);

    printf("Enter rate: ");
    scanf("%f", &rate);

    interest = principle * pow((rate / 100) + 1, times);

    printf("Compound Interest = %.6f\n", interest);
}