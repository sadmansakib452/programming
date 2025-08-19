#include <stdio.h>

int main()
{

    int first_number, second_number, third_number;

    printf("Input num1: ");
    scanf("%d", &first_number);

    printf("Input num2: ");
    scanf("%d", &second_number);

    printf("Input num3: ");
    scanf("%d", &third_number);

    if (first_number > second_number && first_number > third_number)
    {
        printf("\nMaximum is: %d", first_number);
    }
    else if (second_number > third_number)
    {
        printf("Maximum is: %d", second_number);
    }
    else
    {
        printf("Maximum is: %d", third_number);
    }
}