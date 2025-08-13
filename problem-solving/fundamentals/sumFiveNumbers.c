#include <stdio.h>
// 95 76 85 90 89
int main()
{

    int marks[5];
    int sum = 0;
    int i;

    printf("Enter marks of five subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    printf("Total = %d\n", sum);
    printf("Average = %d\n", sum / 5);
    printf("Percentage = %.2f\n", (float)(sum * 100) / 500);
}
#include <stdio.h>
          // 95 76 85 90 89
int main()
{

    int marks[5];
    int sum = 0;
    int i;

    printf("Enter marks of five subjects: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }

    printf("Total = %d\n", sum);
    printf("Average = %d\n", sum / 5);
    printf("Percentage = %.2f\n", (float)(sum * 100) / 500);
}