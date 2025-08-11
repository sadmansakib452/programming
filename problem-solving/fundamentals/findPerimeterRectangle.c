#include <stdio.h>

int main()
{

    int length;
    int width;

    int result;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    result = 2 * (length + width);

    printf("Perimeter of rectangle = %d", result);
}