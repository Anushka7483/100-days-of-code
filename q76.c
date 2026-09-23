//Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int a[10][10];
    int rows;
    int columns;
    int i;
    int j;
    int symmetric = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    if(rows != columns)
    {
        printf("False");
        return 0;
    }

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
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
            }
        }
    }

    if(symmetric == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}