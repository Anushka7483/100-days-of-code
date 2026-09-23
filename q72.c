//Sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows;
    int columns;
    int i;
    int j;
    int sum = 0;

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
        for(j = 0; j < columns; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}