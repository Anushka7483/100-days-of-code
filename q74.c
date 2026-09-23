//Find the transpose of a matrix.
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

    printf("Transpose of matrix:\n");

    for(j = 0; j < columns; j++)
    {
        for(i = 0; i < rows; i++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}