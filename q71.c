//Read and print a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
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

    printf("Matrix is:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}