#include <stdio.h>

int main()
{

    int first_number, second_number, third_number, max_number;

    printf("Input num1: ");
    scanf("%d", &first_number);

    printf("Input num2: ");
    scanf("%d", &second_number);

    printf("Input num3: ");
    scanf("%d", &third_number);

    max_number = first_number > second_number ?

                                              first_number > third_number ? first_number : third_number

                                              : second_number > third_number ? second_number : third_number;

    printf("Maximum is %d", max_number);
}