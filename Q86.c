//Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while(str[length] != '\0')
    {
        if(str[length] == '\n')
        {
            break;
        }

        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
        }
    }

    if(palindrome == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}