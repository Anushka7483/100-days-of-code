//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z')
    {
        printf("Uppercase Alphabet");
    }
    else if (character >= 'a' && character <= 'z')
    {
        printf("Lowercase Alphabet");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}