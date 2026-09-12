//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    int n;
    int digit;
    int count[10] = {0};
    int i;
    int max;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count[0] = 1;
    }

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    max = count[0];
    result = 0;

    for (i = 1; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d", result);

    return 0;
}