//Add two matrices.
#include <stdio.h>

int main()
{
    int a[10][10];
    int b[10][10];
    int c[10][10];
    int rows;
    int columns;
    int i;
    int j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("Enter first matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}