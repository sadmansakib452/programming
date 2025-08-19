#include <stdio.h>

int main()
{
    int number;

    printf("Input number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0)
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
}