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

    result = length * width;

    printf("Area of rectangle = %d sq. units", result);
}