#include <stdio.h>

int main()
{

    int base;
    int height;

    int area;

    printf("Enter base of the triangle: ");
    scanf("%d", &base);

    printf("Enter height of the triangle: ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("Area of the triangle = %d sq. units", area);
}