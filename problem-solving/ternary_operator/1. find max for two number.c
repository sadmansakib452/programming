#include <stdio.h>

int main()
{

    int first_number;
    int second_number;
    int max_number;

    printf("Input first number: ");
    scanf("%d", &first_number);

    printf("Input second number: ");
    scanf("%d", &second_number);

    max_number = first_number > second_number ? first_number : second_number;

    printf("Maximum: %d", max_number);
}