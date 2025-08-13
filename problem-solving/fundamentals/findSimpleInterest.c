#include <stdio.h>

int main()
{

    int principle, times;
    float rate, interest;

    printf("Enter principle: ");
    scanf("%d", &principle);

    printf("Enter times: ");
    scanf("%d", &times);

    printf("Enter rate: ");
    scanf("%f", &rate);

    interest = (float)(principle * times * rate) / 100;

    printf("Simple Interest = %.6f\n", interest);
}