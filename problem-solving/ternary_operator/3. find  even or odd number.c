#include <stdio.h>

int main()
{

    int number;

    printf("Input num: ");
    scanf("%d", &number);

    (number % 2 == 0) ? printf("%d is even") : printf("%d is odd");
}