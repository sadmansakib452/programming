#include <stdio.h>

int main()
{

    int year, leap_year;

    printf("Input year: ");
    scanf("%d", &year);

    (year % 4 == 0 && year % 100 != 0) ? printf("%d is Leap year") : (year % 400 == 0) ? printf("%d is Leap year", year)
                                                                                       : printf("%d is not Leap year", year);
}