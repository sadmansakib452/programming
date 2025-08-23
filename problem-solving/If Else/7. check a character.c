#include <stdio.h>

int main()
{

    char c;

    printf("Input character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("'%c' is alphabet", c);
    }
    else
    {
        printf("not a alphabet");
    }
}