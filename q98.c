//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main()
{
    char str[100];
    int i, lastSpace = -1;

    printf("Enter your name: ");
    gets(str);

    printf("%c. ", str[0]);

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            if(str[i + 1] != '\0')
            {
                lastSpace = i;
            }
        }
    }

    for(i = 1; i < lastSpace; i++)
    {
        if(str[i] == ' ')
        {
            printf("%c. ", str[i + 1]);
        }
    }

    for(i = lastSpace + 1; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}