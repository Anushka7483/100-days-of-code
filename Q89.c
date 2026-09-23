//Count frequency of a given character in a string.
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to count: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count = count + 1;
        }
    }

    printf("Frequency of %c = %d", ch, count);

    return 0;
}