#include <stdio.h>

int main()
{
    float year, week, day;
    int days;

    printf("Enter days: ");
    scanf("%d", &days);

    year = days / 365;
    week = (days % 365) / 7;
    day = (days % 365) % 7;

    printf("%d days = %.0f year/s, %.0f week/s and %.0f day/s\n", days, year, day);
}