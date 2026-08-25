#include <stdio.h>

int main()
{
    int number, remainder, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 2;
        binary = binary + remainder * place;
        place = place * 10;
        number = number / 2;
    }

    printf("%d", binary);

    return 0;
}