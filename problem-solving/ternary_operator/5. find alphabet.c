#include <stdio.h>

int main()
{

    char character;

    printf("Enter any character: ");
    scanf("%c", &character);

    (character >= 'a' && character <= 'z') ? printf("It is ALPHABET") : (character >= 'A' && character <= 'Z') ? printf("It is ALPHABET")
                                                                                                               : printf("it is not ALPHABET");
}