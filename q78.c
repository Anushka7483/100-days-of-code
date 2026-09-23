//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int n;
    int i;
    int j;
    int sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements: ");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}