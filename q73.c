//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main()
{
    int a[10][10];
    int sum[10];
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter matrix elements: ");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < columns; j++)
        {
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}