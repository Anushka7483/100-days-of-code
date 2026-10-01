//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main()
{
    int dd, yyyy;

    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/04/%d", &dd, &yyyy);

    printf("%02d-Apr-%d", dd, yyyy);

    return 0;
}