#include <stdio.h>
#include <math.h>

int main()
{

    int number;
    int result;

    printf("Enter any number: ");
    scanf("%d", &number);

    result = sqrt(number);

    printf("Square root of %d = %d", number, result);
}