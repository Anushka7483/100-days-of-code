//Print the initials of a name.
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter your name: ");
    gets(str);

    printf("%c", str[0]);

    for(i = 1; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            printf("%c", str[i + 1]);
        }
    }

    return 0;
}