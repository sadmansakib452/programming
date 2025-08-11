#include <stdio.h>

int main()
{

    int first_number;
    int second_number;

    printf("First number: ");
    scanf("%d", &first_number);

    printf("Second number: ");
    scanf("%d", &second_number);

    printf("Sum = %d\n", first_number + second_number);
    printf("Difference = %d\n", first_number - second_number);
    printf("Product = %d\n", first_number * second_number);
    printf("Quotient = %d\n", first_number / second_number);
    printf("Modulus = %d\n", first_number & second_number);
}