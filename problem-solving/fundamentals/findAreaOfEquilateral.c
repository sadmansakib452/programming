#include <stdio.h>
#include <math.h>

int main()
{

    int side;
    int area;

    printf("Enter side of the equilateral triangle: ");
    scanf("%d", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("Area of equilateral triangle = %d sq. units", area);
}