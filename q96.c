//Reverse each word without changing word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, start, end;
    char temp;

    printf("Enter a sentence: ");
    gets(str);

    start = 0;

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while(start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
        {
            break;
        }
    }

    printf("%s", str);

    return 0;
}